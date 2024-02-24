module Key_check_module//�������ģ�飬��ʱ����
(	
	input Clk_50mhz,//50Mʱ��
	input Rst_n,//ȫ�ָ�λ�ź�
	
	input Left,//�󰴼�
	input Right,//�Ұ���
	input Up,//�ϰ���
	input Down,//�°���
	
	output reg Key_left,//�󰴼��Ĵ���
	output reg Key_right,//�Ұ����Ĵ���
	output reg Key_up,//�ϰ����Ĵ���
	output reg Key_down//�°����Ĵ���
);

/***************************************************************************/
	reg [31:0] Count1;//32λ����������������100MS
	
	reg Key_left2;//�󰴼��Ĵ���2���������Ĵ�Ƚϵ�
	reg Key_right2;//�Ұ����Ĵ���2
	reg Key_up2;//�ϰ����Ĵ���2
	reg Key_down2;//�°����Ĵ���2
	
	always @ (posedge Clk_50mhz or negedge Rst_n)
	begin
		if(!Rst_n)
		begin
			Count1 <= 32'd0;
			
			Key_left <= 1'd0;
			Key_right <= 1'd0;
			Key_up <= 1'd0;
			Key_down <= 1'd0;
			
			Key_left2 <= 1'd0;
			Key_right2 <= 1'd0;
			Key_up2 <= 1'd0;
			Key_down2 <= 1'd0;						
		end
		else 
		begin
			if(Count1 == 32'd5_0000)//100MS����ʱ���������µ�ƽΪ0
			begin//�������ֲŻ���Ч������Ϊ�Ĵ���2���źű�ԭ�ź��ͺ�һ�����ڣ�������㷨�Ǽ�⵽�Ĵ���2Ϊ0��ԭ�źű�Ϊ1����˵���ղŰ���������
				Count1 <= 0;//����������
				
				Key_left2 <= Left;//����������Ĵ�
				Key_right2 <= Right;
				Key_up2 <= Up;
				Key_down2 <= Down;
			/*	
				if((Key_left2 == 1'd0) && (Left == 1'd1))
					Key_left <= 1'd1;
				if((Key_right2 == 1'd0) && (Right == 1'd1))
					Key_right <= 1'd1;
				if((Key_up2 == 1'd0) && (Up == 1'd1))
					Key_up <= 1'd1;
				if((Key_down2 == 1'd0) && (Down == 1'd1))
					Key_down <= 1'd1;	
			*/
				if((Key_left2 == 1'd1) && (Left == 1'd0))
					Key_left <= 1'd1;
				if((Key_right2 == 1'd1) && (Right == 1'd0))
					Key_right <= 1'd1;
				if((Key_up2 == 1'd1) && (Up == 1'd0))
					Key_up <= 1'd1;
				if((Key_down2 == 1'd1) && (Down == 1'd0))
					Key_down <= 1'd1;	
			end
			else
			begin
				Count1 <= Count1 + 32'd1;
				//���û�а������£��򱣳����������źŶ�Ϊ��
				Key_left <= 1'd0;
				Key_right <= 1'd0;
				Key_up <= 1'd0;
				Key_down <= 1'd0;
			end
		end	
	end				
	
endmodule
