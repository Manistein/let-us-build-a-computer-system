module start_Vga_sync		//vgaͬ��ģ��
(
	input CLK_40M,
	input RSTn,
	output start_Hsync_sig,		//��ͬ���ź�
	output start_Vsync_sig,		//��ͬ���ź�
	output start_Ready_sig,		//��Ч�����źţ����������800*600��
	output [10:0] Row_add,	//11λ���е�ַ�����ﱾ�������10λ�͹����ˣ�����Ϊ��ƥ���е�ַ����������������Զ����11λ��
	output [10:0] Column_add	//11λ���е�ַ
);
	//**************************************************************
	reg [10:0] Count_hsync;		//��ͬ�������Ĵ�����1056�����ؾ����㣨ʱ���Ѿ�������Ƶ��������һ��ʱ�����ڼ���һ�����أ�
	always @ (posedge CLK_40M or negedge RSTn)
	begin
		if(!RSTn)
			Count_hsync <= 11'd 0;
		else 
			 if(Count_hsync == 11'd 800)
				Count_hsync <= 11'd 0;
			 else	
				Count_hsync <= Count_hsync + 1'd 1;	
	end
	
	//**************************************************************
	reg [10:0] Count_vsync;		//��ͬ�������Ĵ�����628�����ؾ����㣨ʱ���Ѿ�������Ƶ��������һ��ʱ�����ڼ���һ�����أ�
	always @ (posedge CLK_40M or negedge RSTn)
	begin
		if(!RSTn)
			Count_vsync <= 11'd 0;
		else 
			if(Count_vsync == 11'd 525)
				Count_vsync <= 11'd 0;
			else	if(Count_hsync == 11'd 800) 		//ÿ�������شﵽ1056��֤���Ѿ�ɨ��һ���ˣ����м�������һ~
						Count_vsync <= Count_vsync + 1'd 1;					
	end
	
	//**************************************************************
	reg rReady_sig;		//��Ч�����źżĴ�����800*600����ı�־λ~
	always @ (posedge CLK_40M or negedge RSTn)
	begin
		if(!RSTn)
			rReady_sig <= 1'd 0;
		else	if((Count_hsync > (11'd 144 + 11'd200)) && (Count_hsync < (11'd 784 - 11'd184))		//�����Ƕ���������жϣ���216<��<1016,27<��<627ʱ����800*600������־λΪ1������Ϊ0.
					 && (Count_vsync > (11'd 35 + 11'd93)) && (Count_vsync < (11'd 515 - 11'd133)))
					rReady_sig <= 1'd 1;
				else
					rReady_sig <= 1'd 0;		
	end
	
	assign start_Ready_sig = rReady_sig;		//������ֵ��Ready_sig
	
	//**************************************************************
	reg [10:0] rRow_add;		//�е�ַ�����Ĵ���
	reg [10:0] rColumn_add;		//�е�ַ�����Ĵ���
	always @ (posedge CLK_40M or negedge RSTn)
	begin
		if(!RSTn)
			begin
				rRow_add <= 11'd 0;
				rColumn_add <= 11'd 0;
			end
		else	
			begin
				rColumn_add <= (rReady_sig)?		Count_hsync - 11'd 144   :	 11'd 0;		//��rReady_sigΪ1����Count_vsync - 217��ֵ����rColumn_add������rReady_sigΪ0����0����rColumn_add
				rRow_add <= (rReady_sig)?	 Count_vsync - 11'd 27	 :	 11'd 0; 		//��rReady_sigΪ1����Count_hsync -  28��ֵ����rRow_add����rReady_sigΪ0����0����rRow_add��
			end
	end
	
	assign Row_add = rRow_add;
	assign Column_add = rColumn_add;
	
	//**************************************************************
	reg rHsync_sig;		//���ź�
	reg rVsync_sig;		//���ź�
	always @ ( posedge CLK_40M or negedge RSTn )
	begin
		if(!RSTn)
			begin
				rHsync_sig <= 1'd 0;
				rVsync_sig <= 1'd 0;
			end
		else
			begin
				rVsync_sig <= (Count_vsync <= 11'd 2)?		1'd 0	:	1'd 1;		//��ʱ��ͼ����֪������Count_vsync��o�Σ�4�����أ�ʱ����ƽΪ�ͣ�����Ϊ�ߡ�
				rHsync_sig <= (Count_hsync <= 11'd 96)? 	1'd 0 	:	1'd 1; 		//��ʱ��ͼ����֪������Count_hsync��a�Σ�128�����أ�ʱ����ƽΪ�ͣ�����Ϊ�ߡ�
			end
	end
	
	assign start_Hsync_sig = rHsync_sig;
	assign start_Vsync_sig = rVsync_sig;
	
endmodule 