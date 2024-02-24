module Apple_generate_module//ƻ����������ģ��
(
	input Clk_50mhz,//50MHZ��ʱ��
	input Rst_n,//ȫ�ָ�λ
	
	input [5:0] Head_x,//��ͷ��X����
	input [5:0] Head_y,//��ͷ��Y����
	
	output reg [5:0] Apple_x,//ƻ����X����
	output reg [4:0] Apple_y,//ƻ����Y����

	output reg Body_add_sig//�ߵ����������ź�
);
/***************************************************************************/
	reg [31:0] Count1;//32λ�ļ���������������ʱ��
	reg [10:0] Random_num;//11λ��α���������6λΪƻ��X���� ��5λΪƻ��Y����
	
	always@(posedge Clk_50mhz)
	begin	
		Random_num <= Random_num + 11'd921;  //�üӷ��������������Ϊÿһ��ʱ�ӵ������ض�������������+һ���������������Ǽ�����921�����߳�ƻ����ʱ��
	end												 //��ʱ�̲�ͬ��������Ͳ�һ�������Ը�������ĸо���
	
	always@(posedge Clk_50mhz or negedge Rst_n)
	begin
		if(!Rst_n)
		begin
			Count1 <= 32'd0;//ʱ�Ӽ�������
			
			Apple_x <= 6'd28;//����Ĭ�ϳ��ֵ�ƻ����λ��
			Apple_y <= 5'd13;//���X,Y��λ��Ҳ�����Լ��޸�
			
			Body_add_sig <= 1'd0;//0��ʾ�������������
		end
		else	if(Count1 == 32'd250_000)//0.5���ʱ
				begin
					Count1 <= 32'd0;
					if((Apple_x == Head_x) && (Apple_y == Head_y))//��ͷ�Ե�ƻ��,�����������ź�
					begin//�ж�������Ƿ񳬳���Ļ�����귶Χ���������ת��Ϊ�¸�ƻ����X Y����
						Body_add_sig <= 1'd1;
						Apple_x <= (Random_num[10:5]> 6'd38)?		(Random_num[10:5] - 6'd25)		:		((Random_num[10:5] == 6'd0)?		6'd1		:		Random_num[10:5]);
						Apple_y <= (Random_num[4:0] > 5'd28)?		(Random_num[4:0] - 5'd3)		:		((Random_num[4:0] == 5'd0)?		5'd1		:		Random_num[4:0]);
					end   
					else
						Body_add_sig <= 1'd0;
				end
		else
			Count1 <= Count1 + 32'd1;
	end
endmodule
