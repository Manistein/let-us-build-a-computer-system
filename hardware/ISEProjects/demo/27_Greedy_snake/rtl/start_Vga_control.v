module start_Vga_control		//VGA����ģ�飬��Ҫ��������Ч�����źţ��е�ַ���е�ַ������졢�̡��������ź�
(
	input CLK_40M,
	input RSTn,
	input start_Ready_sig,
	input [10:0] Row_add,
	input [10:0] Column_add,
	input [255:0] Rom_data,
	output [10:0] Rom_add,
	output start_Vga_red,
	output start_Vga_green,
	output start_Vga_blue
);
	reg [10:0] m;
	reg [10:0] n;
	always @ (posedge CLK_40M or negedge RSTn)
	begin
		if(!RSTn)
			begin
				m <= 11'd 0;
				n <= 11'd 0;
			end
		else
			begin//��߸ĵ�������ͼƬ�����꣬�ұ߸ĵ������ص㲹��
				n <= (start_Ready_sig && ((11'd0 + 11'd200) < Column_add ) && (Column_add < (11'd 256 + 11'd200)))?		(Column_add [10:0] - 11'd200	)	:	11'd 0;
				m <= (start_Ready_sig && ((11'd0 + 11'd100) < Row_add ) && (Row_add < (11'd 256 + 11'd100)))?				(Row_add [10:0] - 11'd100		)	:	11'd 0;		
			end	
	end
	
	assign Rom_add = m;
	assign start_Vga_red = (start_Ready_sig)?			(		(Rom_data [11'd 255 - n])?		1'b0	:		1'b1		)				:	1'd 0;
	assign start_Vga_green = (start_Ready_sig)?		(		(Rom_data [11'd 255 - n])?		1'b0	:		1'b1		)				:	1'd 0;

	assign start_Vga_blue = (start_Ready_sig)?	(	(Rom_data [11'd 255 - n])?		1'b1		:		1'b1		):	1'b0;
	//****************************!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	
		
endmodule 