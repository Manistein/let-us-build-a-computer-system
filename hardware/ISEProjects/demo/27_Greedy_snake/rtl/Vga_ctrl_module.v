module Vga_ctrl_module// VGA����ģ�飬���ݵ�ǰɨ�赽�ĵ�����һ���������Ӧ��ɫ
(
	input Clk_25mhz,//25Mʱ��
	input Rst_n,//ȫ�ָ�λ�ź�
	
	input [1:0] Object,//���ڱ�ʾ��ǰɨ��Ķ���������״̬ 00��NONE�� 01��HEAD�� 10��BODY�� 11��WALL��
	
	input [5:0] Apple_x,//ƻ����X����
	input [4:0] Apple_y,//ƻ����Y����
	
	output reg [9:0] Pixel_x,
	output reg [9:0] Pixel_y,
	
	
	
	output reg Hsync_sig,//��ͬ���ź�
	output reg Vsync_sig,//��ͬ���ź�
	output  play_VGA_red,
	output  play_VGA_green,
	output  play_VGA_blue

);
	reg [2:0] Vga_rgb;//RGB
	assign play_VGA_red = Vga_rgb[0];
	assign play_VGA_green = Vga_rgb[1];
	assign play_VGA_blue = Vga_rgb[2];
	
	
//	assign {play_VGA_red,play_VGA_green,play_VGA_blue} = Vga_rgb[2:0];
/***************************************************************************/
	reg [9:0] Column_count;//�����صļ�����
	reg [9:0] Row_count;//�����صļ�����
	
	localparam NONE = 2'b00;
	localparam HEAD = 2'b01;
	localparam BODY = 2'b10;
	localparam WALL = 2'b11;
	
	localparam HEAD_COLOR = 3'b010;
	localparam BODY_COLOR = 3'b011;
	
	
/***************************************************************************/
/***************************************************************************/
	
	reg [3:0] lox;
	reg [3:0] loy;

	always @ (posedge Clk_25mhz or negedge Rst_n)
	begin	
		if(!Rst_n)
		begin
			Row_count <= 10'd0;
			Column_count <= 10'd0;
			
			Hsync_sig <= 1'd1;
			Vsync_sig <= 1'd1;
		end
		else 
		begin
			Pixel_x <= Row_count - 10'd144;//a + b�ε�����=144��640*480 @ 60��
			Pixel_y <= Column_count - 10'd33;//o + p�ε�����=33��640*480 @ 60��
						
			if(Row_count == 10'd0)//��⵽�м�����Ϊ0����˵����ʼ�����ˣ�������ͬ���ź�
			begin
				Hsync_sig <= 1'd0;
				Row_count <= Row_count + 10'd1;
			end
			else if(Row_count == 10'd96)//a����96�����أ�����֮��Hsync_sig��������
					begin
						Hsync_sig <= 1'd1;
						Row_count <= Row_count + 10'd1;
					end
			else if(Row_count == 10'd799)//��һ����799�����أ�4��������һ�����Ƶ���һ�У�����Ŀ��1������Ŀ����
					begin
						Row_count <= 10'd0;
						Column_count <= Column_count + 10'd1;//Column_count���ۼ��ǿ��ж��������Ƿ�ﵽ799��
					end
			else 
					Row_count <= Row_count + 10'd1;
			
			
			
			if(Column_count == 10'd0)//��⵽�м�����Ϊ0����˵����ʼ�����ˣ�������ͬ���ź�
					Vsync_sig <= 1'd0;							
			else if(Column_count == 10'd2)//o����2������
						Vsync_sig <= 1'd1;
			else if(Column_count == 10'd521)
					begin
						Column_count <= 10'd0;
						Vsync_sig <= 1'd0;
					end
			
			
			
			if((Pixel_x >= 10'd0) && (Pixel_x < 10'd640) && (Pixel_y >= 10'd0) && (Pixel_y < 10'd480))
			begin
				lox = Pixel_x[3:0];
				loy = Pixel_y[3:0];
				
				if((Pixel_x[9:4] == Apple_x) && (Pixel_y[9:4] == Apple_y))//�ж��Ƿ�ɨ�赽��ƻ���ĸ���λ��
					case({lox,loy})//������ƻ��������ӿ������е���󡣡�
						8'b0000_0000	://ѡ���ƻ���е�ַΪ��0��0��������
												Vga_rgb = 3'b001;//�����Ч���ǣ�ƻ���ĵ�ַΪ��0,0���ĵط����Ǹ��׵�
						default			:
												Vga_rgb = 3'b001;//��ɫ0
					endcase
				else if(Object == NONE)
						Vga_rgb = 3'b000;
				else if(Object == WALL)		
						Vga_rgb = 3'b101;
				else if((Object == HEAD) | (Object == BODY))//���ݵ�ǰɨ�赽�ĵ�����һ���������Ӧ��ɫ
						begin
							case({lox,loy})
								8'b0000_0000:
													Vga_rgb = 3'b000;//ͬ���أ�ÿһ�������ַΪ��0,0��������Ϊ��ɫ
								8'b0000_1111:
													Vga_rgb = 3'b000;//ͬ���أ�ÿһ�������ַΪ��0,16��������Ϊ��ɫ
								8'b1111_1111:
													Vga_rgb = 3'b000;//ͬ���أ�ÿһ�������ַΪ��16,16��������Ϊ��ɫ
								8'b1111_0000:
													Vga_rgb = 3'b000;//ͬ���أ�ÿһ�������ַΪ��16,0��������Ϊ��ɫ
								default:
													Vga_rgb = (Object == HEAD)?	HEAD_COLOR		:		BODY_COLOR;
							endcase
						end
			end
			else
				Vga_rgb = 3'b000;//�����ط������ɫ
		end
	end
		
endmodule
	