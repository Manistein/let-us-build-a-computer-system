module Snake_ctrl_module//�ߵ��˶��������ģ��
(
	input Clk_50mhz,//50Mʱ��
	input Rst_n,//ȫ�ָ�λ�ź�
	
	input Key_left,//�󰴼�
	input Key_right,//�Ұ���
	input Key_up,//�ϰ���
	input Key_down,//�°���
	
	output reg [1:0] Object,//���ڱ�ʾ��ǰɨ��Ķ���������״̬ 00��NONE�� 01��HEAD�� 10��BODY�� 11��WALL��
									//Ҳ���ں����VGA��ͨ��Object���ж���ɫ�����
	input [9:0] Pixel_x,//��4λ��ʾһ�����������ص����꣬��5λ��ʾ������
	input [9:0] Pixel_y,//ɨ�����꣬��λ�������ص㡱
	
	output [5:0] Head_x,	//�ߵ�ͷ����һ���X����
	output [5:0] Head_y,//�ߵ�ͷ����һ���Y����
	
	input Body_add_sig,//���峤�������ź�
	
	input [2:0] Game_status,//3����Ϸ״̬��START��001��PLAY��010��END��100��
	
	output reg Hit_body_sig,//ײ�������ź�
	output reg Hit_wall_sig,//ײ��ǽ�ź�
	input Flash_sig//�����ź�
);
/***************************************************************************/
	
	localparam Up = 2'b00;
	localparam Down = 2'b01;
	localparam Left = 2'b10;
	localparam Right = 2'b11;
	
	
	localparam NONE = 2'b00;
	localparam HEAD = 2'b01;
	localparam BODY = 2'b10;
	localparam WALL = 2'b11;
	
	
	parameter   END = 3'b100;
/***************************************************************************/
/***************************************************************************/
	
	reg [6:0] Body_num;//7λ������������������16��
	
	reg [31:0] Count;//32λ��������������ʱ
	
	wire [1:0] Direct;
	reg [1:0] Direct_r;//�Ĵ淽��ļĴ���
	reg [1:0] Direct_next;//��һ������ļĴ���
	
	assign Direct = Direct_r;
	
	
	reg Direct_left;//������
	reg Direct_right;//������
	reg Direct_up;//������
	reg Direct_down;//������
	
	reg [5:0] Body_x [15:0];//���ָ�ʽ�Ƕ�ά�������˼����ַΪ0~15��ÿ����ַΪ6bits
	reg [5:0] Body_y [15:0];//�峤���꣬��λ�������ӡ� ��16*16������ɵĸ���
	reg [15:0] Snake_light_sig;//��������������������1Ϊ����0Ϊ��
	
	reg [2:0] color;//RGB����λ
	
	assign Head_x = Body_x[0];//Body_x��Body_y��ʾһ������������ڵĸ�����
	assign Head_y = Body_y[0];
	
/***************************************************************************/
	
	always @ (posedge Clk_50mhz or negedge Rst_n)
	begin
		if(!Rst_n)
			Direct_r <= Right;//Ĭ��һ������������ǰ��
		else
			Direct_r <= Direct_next;
	end

/***************************************************************************/
/***************************************************************************/
	
	always @ (posedge Clk_50mhz or negedge Rst_n)
	begin
		if(!Rst_n)
		begin
			Count <= 32'd0;
			//X�����ҵ�����Y���ϵ��µ���
			Body_x[0] <= 6'd10;//��ͷĬ�ϳ��ֵ�X������10
			Body_y[0] <= 6'd5;//��ͷĬ�ϳ��ֵ�Y������5
			
			Body_x[1] <= 6'd9;//��һ�������X������9
			Body_y[1] <= 6'd5;//��һ�������Y���껹��5
			
			Body_x[2] <= 6'd8;//�ڶ��������X������8
			Body_y[2] <= 6'd5;//�ڶ��������Y���껹��5
			
			//�����������ʱ��û�У�����û����ν�����꣬��Ϊ0�������16������
			Body_x[3] <= 6'd0;
			Body_y[3] <= 6'd0;
			
			Body_x[4] <= 6'd0;
			Body_y[4] <= 6'd0;
			
			Body_x[5] <= 6'd0;
			Body_y[5] <= 6'd0;
			
			Body_x[6] <= 6'd0;
			Body_y[6] <= 6'd0;
			
			Body_x[7] <= 6'd0;
			Body_y[7] <= 6'd0;
			
			Body_x[8] <= 6'd0;
			Body_y[8] <= 6'd0;
			
			Body_x[9] <= 6'd0;
			Body_y[9] <= 6'd0;
			
			Body_x[10] <= 6'd0;
			Body_y[10] <= 6'd0;
			
			Body_x[11] <= 6'd0;
			Body_y[11] <= 6'd0;
			
			Body_x[12] <= 6'd0;
			Body_y[12] <= 6'd0;
			
			Body_x[13] <= 6'd0;
			Body_y[13] <= 6'd0;
			
			Body_x[14] <= 6'd0;
			Body_y[14] <= 6'd0;
			
			Body_x[15] <= 6'd0;
			Body_y[15] <= 6'd0;
			
			Hit_wall_sig <= 1'd0;
			Hit_body_sig <= 1'd0;
		end
		else	if(Count == 32'd12_500_000) //0.02us*12'500'000 = 0.25s��ÿ���ƶ��Ĵ�
				begin
					Count <= 32'd0;
		//************************************************�������			
					if(Game_status == END)
					begin
						Body_x[0] <= 6'd10;//��ͷĬ�ϳ��ֵ�X������10
						Body_y[0] <= 6'd5;//��ͷĬ�ϳ��ֵ�Y������5
						
						Body_x[1] <= 6'd9;//��һ�������X������9
						Body_y[1] <= 6'd5;//��һ�������Y���껹��5
						
						Body_x[2] <= 6'd8;//�ڶ��������X������8
						Body_y[2] <= 6'd5;//�ڶ��������Y���껹��5
						
						//�����������ʱ��û�У�����û����ν�����꣬��Ϊ0�������16������
						Body_x[3] <= 6'd0;
						Body_y[3] <= 6'd0;
						
						Body_x[4] <= 6'd0;
						Body_y[4] <= 6'd0;
						
						Body_x[5] <= 6'd0;
						Body_y[5] <= 6'd0;
						
						Body_x[6] <= 6'd0;
						Body_y[6] <= 6'd0;
						
						Body_x[7] <= 6'd0;
						Body_y[7] <= 6'd0;
						
						Body_x[8] <= 6'd0;
						Body_y[8] <= 6'd0;
						
						Body_x[9] <= 6'd0;
						Body_y[9] <= 6'd0;
						
						Body_x[10] <= 6'd0;
						Body_y[10] <= 6'd0;
						
						Body_x[11] <= 6'd0;
						Body_y[11] <= 6'd0;
						
						Body_x[12] <= 6'd0;
						Body_y[12] <= 6'd0;
						
						Body_x[13] <= 6'd0;
						Body_y[13] <= 6'd0;
						
						Body_x[14] <= 6'd0;
						Body_y[14] <= 6'd0;
						
						Body_x[15] <= 6'd0;
						Body_y[15] <= 6'd0;
						
						Hit_wall_sig <= 1'd0;
						Hit_body_sig <= 1'd0;

					end
					else
					begin//ײǽ������������������ң�ײ���ϣ�Y = 1��ײ���±ߣ�Y = 28��ײ����ߣ�X = 1��ײ���ұߣ�X = 38������ͼ��֪����~
						if(((Direct == Up) && (Body_y[0] == 6'd1)) | 
							((Direct == Down) && (Body_y[0] == 6'd28)) | 
							((Direct == Left) && (Body_x[0] == 6'd1)) | 
							((Direct == Right) && (Body_x[0] == 6'd38)))
							
							Hit_wall_sig <= 1'd1;
						else if(((Body_y[0] == Body_y[1]) && (Body_x[0] == Body_x[1]) && (Snake_light_sig[1] == 1'd1)) | 
								((Body_y[0] == Body_y[2]) && (Body_x[0] == Body_x[2]) && (Snake_light_sig[2] == 1'd1)) | 
								((Body_y[0] == Body_y[3]) && (Body_x[0] == Body_x[3]) && (Snake_light_sig[3] == 1'd1)) | 
								((Body_y[0] == Body_y[4]) && (Body_x[0] == Body_x[4]) && (Snake_light_sig[4] == 1'd1)) | 
								((Body_y[0] == Body_y[5]) && (Body_x[0] == Body_x[5]) && (Snake_light_sig[5] == 1'd1)) | 
								((Body_y[0] == Body_y[6]) && (Body_x[0] == Body_x[6]) && (Snake_light_sig[6] == 1'd1)) | 
								((Body_y[0] == Body_y[7]) && (Body_x[0] == Body_x[7]) && (Snake_light_sig[7] == 1'd1)) | 
								((Body_y[0] == Body_y[8]) && (Body_x[0] == Body_x[8]) && (Snake_light_sig[8] == 1'd1)) | 
								((Body_y[0] == Body_y[9]) && (Body_x[0] == Body_x[9]) && (Snake_light_sig[9] == 1'd1)) | 
								((Body_y[0] == Body_y[10]) && (Body_x[0] == Body_x[10]) && (Snake_light_sig[10] == 1'd1)) | 
								((Body_y[0] == Body_y[11]) && (Body_x[0] == Body_x[11]) && (Snake_light_sig[11] == 1'd1)) | 
								((Body_y[0] == Body_y[12]) && (Body_x[0] == Body_x[12]) && (Snake_light_sig[12] == 1'd1)) | 
								((Body_y[0] == Body_y[13]) && (Body_x[0] == Body_x[13]) && (Snake_light_sig[13] == 1'd1)) | 
								((Body_y[0] == Body_y[14]) && (Body_x[0] == Body_x[14]) && (Snake_light_sig[14] == 1'd1)) | 
								((Body_y[0] == Body_y[15]) && (Body_x[0] == Body_x[15]) && (Snake_light_sig[15] == 1'd1)))
								
								Hit_body_sig <= 1'd1;//��ͷ��Y����=��һλ�����Y���꣬ͷ��X����=��һλ�����X���꣬����ĸó���λ����=��������
						else
						begin//����Ĵ����ǲ����������󣬺���һ���������ǰ��һ������ĵ�ַ~
							Body_x[1] <= Body_x[0];
							Body_y[1] <= Body_y[0];
							
							Body_x[2] <= Body_x[1];
							Body_y[2] <= Body_y[1];
							
							Body_x[3] <= Body_x[2];
							Body_y[3] <= Body_y[2];
							
							Body_x[4] <= Body_x[3];
							Body_y[4] <= Body_y[3];
							
							Body_x[5] <= Body_x[4];
							Body_y[5] <= Body_y[4];
							
							Body_x[6] <= Body_x[5];
							Body_y[6] <= Body_y[5];
							
							Body_x[7] <= Body_x[6];
							Body_y[7] <= Body_y[6];
							
							Body_x[8] <= Body_x[7];
							Body_y[8] <= Body_y[7];
							
							Body_x[9] <= Body_x[8];
							Body_y[9] <= Body_y[8];
							
							Body_x[10] <= Body_x[9];
							Body_y[10] <= Body_y[9];
							
							Body_x[11] <= Body_x[10];
							Body_y[11] <= Body_y[10];
							
							Body_x[12] <= Body_x[11];
							Body_y[12] <= Body_y[11];
							
							Body_x[13] <= Body_x[12];
							Body_y[13] <= Body_y[12];
							
							Body_x[14] <= Body_x[13];
							Body_y[14] <= Body_y[13];
							
							Body_x[15] <= Body_x[14];
							Body_y[15] <= Body_y[14];
						
							case(Direct)//����ѡ����ǰ�������ǽ�ߵ�ʱ��,���ݰ��°����ж��Ƿ�ײǽ ���򰴹��ɸı�ͷ������							
								Up:
									begin
									if(Body_y[0] == 6'd1)//�����һ���ƶ��Ľ������Ѿ���1�ˣ��ٰ��ϣ����ײǽ
											Hit_wall_sig <= 1'd1;
										else
											Body_y[0] <= Body_y[0] - 6'd1;//ע������ϵ�������� - 1����Ϊ��������0�����������ߵĻ���Y�� - 1�ġ�
									end
								
								Down:
									begin
										if(Body_y[0] == 6'd28)
											Hit_wall_sig <= 1'd1;
										else
											Body_y[0] <= Body_y[0] + 6'd1;
									end
								Left:
									begin
										if(Body_x[0] == 6'd1)
											Hit_wall_sig <= 1'd1;
										else
											Body_x[0] <= Body_x[0] - 6'd1;//ע������ϵ�������� + 1����Ϊ��������0�����������ߵĻ���X�� - 1�ġ�	
									end
								
								Right:
									begin
										if(Body_x[0] == 6'd38)
											Hit_wall_sig <= 1'd1;
										else
											Body_x[0] <= Body_x[0] + 6'd1;
									end
							endcase																	
						end					
					end
			end 
		else
			Count <= Count + 32'd1;//���������ʱ�䵽0.25�룬���������1
	end
/***************************************************************************/
	
	always @ (posedge Clk_50mhz)//���ĸ�������ֵ
	begin
		if(Key_left == 1'd1)
				Direct_left <= 1'd1;//�Ѱ�����Ϣ��������
		else if(Key_right == 1'd1)
				Direct_right <= 1'd1;
		else if(Key_up == 1'd1)
				Direct_up <= 1'd1;
		else if(Key_down == 1'd1)
				Direct_down <= 1'd1;			
		else 
		begin
			Direct_left <= 1'd0;
			Direct_right <= 1'd0;
			Direct_up <= 1'd0;
			Direct_down <= 1'd0;
		end
	end
	/***************************************************************************/
	
	always @ (*)//����Ҳ�ǵ�ƽ����
	begin   //���ݵ�ǰ�˶�״̬�����¼�λ�ж���һ���˶����������ǽ�ߵ����
		Direct_next = Right;//Ĭ�ϸտ�ʼ��������
		
		case(Direct)
			Up://���ݰ����������������ѡ�������ǰ������µ�ʱ���źŴ���Direct_next��Ȼ����Direct_next�͸�Direct_r������ٸ�ֵ��Direct
				begin
					if(Direct_left)
						Direct_next = Left;
					else if(Direct_right)
						Direct_next = Right;
					else
						Direct_next = Up;
				end
			
			Down:
				begin
					if(Direct_left)
						Direct_next = Left;
					else if(Direct_right)
						Direct_next = Right;
					else
						Direct_next = Down;
				end		
			Left:
				begin
					if(Direct_up)
						Direct_next = Up;
					else if(Direct_down)
						Direct_next = Down;
					else
						Direct_next = Left;
				end
			
			Right:
				begin
					if(Direct_up)
						Direct_next = Up;
					else if(Direct_down)
						Direct_next = Down;
					else
						Direct_next = Right;
				end		
		endcase
	end

/***************************************************************************/
	reg Eaten_sig;//��ƻ��״̬
	
	always @ (posedge Clk_50mhz or negedge Rst_n)//����ƻ��û����������Body_add_sig == 1����ʾ�峤����һλ��"Snake_light_sig[Body_num] <= 1;",�õ�Body_numλ�����֡�
	begin
		if(!Rst_n)
		begin
			Snake_light_sig <= 16'd7;//0111��3��������
			Body_num <= 7'd3;
			Eaten_sig <= 1'd0;//��ʼ��ʾ����Ϊ3��Snake_light_sig = 0000_0000_0111
		end		
		else if(Game_status == END)
				begin
					Body_num <= 7'd3;
					Eaten_sig <= 1'd0;
					Snake_light_sig <= 16'd7;
				end 
		else				
		begin//�ж���ͷ��ƻ�������Ƿ��غ�
			case(Eaten_sig)
				1'd0	:
					begin
						if(Body_add_sig)
						begin
							Body_num <= Body_num + 7'd1;
							Snake_light_sig[Body_num] <= 1'b1;
							Eaten_sig <= 1'd1;//�����¡��ź�
						end
						else
							Snake_light_sig[Body_num] <= Snake_light_sig[Body_num];
					end
				1'd1	:
					begin
						if(!Body_add_sig)//�ȴ����������ź�Ϊ0
							Eaten_sig <= 0;
						else
							Eaten_sig <= Eaten_sig;
					end
			endcase
		end
	end
	
	
	always @ (Pixel_x or Pixel_y or Snake_light_sig or Flash_sig)//ע�⣬�����ǵ�ƽ�����������õ���������ֵ��=��
	begin
		if((Pixel_x >= 10'd0) && (Pixel_x < 10'd640) && (Pixel_y >= 10'd0) && (Pixel_y < 10'd480))//���ɨ��������Ŀ���640*480��
		begin
			if(Pixel_x[9:4] == 6'd0 |
				Pixel_y[9:4] == 6'd0 | 
				Pixel_x[9:4] == 6'd39 | 
				Pixel_y[9:4] == 6'd29)
				
				Object = WALL;//ɨ�������ǽ
			else if(Pixel_x[9:4] == Body_x[0] && Pixel_y[9:4] == Body_y[0] && Snake_light_sig[0] == 1'd1)//���ɨ���������ͷ
					Object = (Flash_sig == 1'd1)?		HEAD		:		NONE;//������������ͷ������ɫ���������ͺ���ɫ
			else if(((Pixel_x[9:4] == Body_x[1]) && (Pixel_y[9:4] == Body_y[1]) && (Snake_light_sig[1] == 1'd1)) | 
					 ((Pixel_x[9:4] == Body_x[2]) && (Pixel_y[9:4] == Body_y[2]) && (Snake_light_sig[2] == 1'd1)) | 
					 ((Pixel_x[9:4] == Body_x[3]) && (Pixel_y[9:4] == Body_y[3]) && (Snake_light_sig[3] == 1'd1)) | 
					 ((Pixel_x[9:4] == Body_x[4]) && (Pixel_y[9:4] == Body_y[4]) && (Snake_light_sig[4] == 1'd1)) | 
					 ((Pixel_x[9:4] == Body_x[5]) && (Pixel_y[9:4] == Body_y[5]) && (Snake_light_sig[5] == 1'd1)) | 
					 ((Pixel_x[9:4] == Body_x[6]) && (Pixel_y[9:4] == Body_y[6]) && (Snake_light_sig[6] == 1'd1)) | 
					 ((Pixel_x[9:4] == Body_x[7]) && (Pixel_y[9:4] == Body_y[7]) && (Snake_light_sig[8] == 1'd1)) | 
					 ((Pixel_x[9:4] == Body_x[8]) && (Pixel_y[9:4] == Body_y[8]) && (Snake_light_sig[8] == 1'd1)) | 
					 ((Pixel_x[9:4] == Body_x[9]) && (Pixel_y[9:4] == Body_y[9]) && (Snake_light_sig[9] == 1'd1)) | 
					 ((Pixel_x[9:4] == Body_x[10]) && (Pixel_y[9:4] == Body_y[10]) && (Snake_light_sig[10] == 1'd1)) | 
					 ((Pixel_x[9:4] == Body_x[11]) && (Pixel_y[9:4] == Body_y[11]) && (Snake_light_sig[11] == 1'd1)) | 
					 ((Pixel_x[9:4] == Body_x[12]) && (Pixel_y[9:4] == Body_y[12]) && (Snake_light_sig[12] == 1'd1)) | 
					 ((Pixel_x[9:4] == Body_x[13]) && (Pixel_y[9:4] == Body_y[13]) && (Snake_light_sig[13] == 1'd1)) | 
					 ((Pixel_x[9:4] == Body_x[14]) && (Pixel_y[9:4] == Body_y[14]) && (Snake_light_sig[14] == 1'd1)) | 
					 ((Pixel_x[9:4] == Body_x[15]) && (Pixel_y[9:4] == Body_y[15]) && (Snake_light_sig[15] == 1'd1)))
					//ɨ�����������					
					Object = (Flash_sig == 1)?		BODY		:		NONE;//�������������������ɫ���������ͺ���ɫ
			else 
					Object = NONE;
		end
		else
			Object = NONE;
	end
	
endmodule
