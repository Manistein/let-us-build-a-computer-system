module Game_ctrl_module//��Ϸ����ģ��,������Ϸ״̬������Ӧ�����ź�	
(
	input Clk_50mhz,//��Ƶ���50MHZʱ��
	input Rst_n,//ȫ�ָ�λ�ź�

	input Key_left,//�󰴼�
	input Key_right,//�Ұ���
	input Key_up,//�ϰ���
	input Key_down,//�°���
	/*	
	input Left,//�󰴼�
	input Right,//�Ұ���
	input Up,//�ϰ���
	input Down,//�°���
	
	*/
	
	output reg  [2:0] Game_status,//3����Ϸ״̬��START��001��PLAY��010��END��100��
	
	input Hit_wall_sig,//ײǽ�ź�
	input Hit_body_sig,//ײ���Լ��������ź�
	
	output reg Flash_sig//FLASH�ź�
//	output reg Flash_over_sig
//	output reg Restart_sig//���¿�ʼ�ź�
		
);
	//3����Ϸ״̬	
	parameter START = 3'b001;
	parameter  PLAY = 3'b010;
	parameter   END = 3'b100;
	
//	reg [31:0] Count1;//32λ�ļ���������������ʱ���
//	reg Flash_over_sig;
	
/*	reg [31:0] Count2;
	parameter T200ms = 32'd10_000_000;
	
	always @ (posedge Clk_50mhz or negedge Rst_n)
	begin
		if(!Rst_n)
			Count2 <= 32'd0;
		
		else if(Count2 == T200ms)
				Count2 <= 32'd0;
		else
				Count2 <= Count2 + 32'd1;
	end
	
	
	
	*/
	always @ (posedge Clk_50mhz or negedge Rst_n)
	begin
		if(!Rst_n)
		begin
			Game_status <= START;;//��λ��ʱ����START״̬
	//		Count1 <= 32'd0;//����������
			Flash_sig <= 1'd1;
			
	//		Flash_over_sig <= 1'b0;
		end
		else
		begin
			Game_status <= START;
			case(Game_status)//ѡ����Ϸ״̬
				START://��START״̬�������һ���������£�����PLAY״̬
					  
					  
							begin	
								if(Key_left | Key_right | Key_up | Key_down)
								begin		
									Game_status <= PLAY;
						/*			Key_left <= 1'd0;
									Key_right <= 1'd0;
									Key_up <= 1'd0;
									Key_down <= 1'd0;*/
								end
								else
									Game_status <= START;//����Ϊ�˱�������������
								//	Game_status <= END;
							end
					 
	
				PLAY://PLAY״̬�����ײǽ���������Լ����壬��END״̬
						begin
							if(Hit_wall_sig | Hit_body_sig)
							begin		
					/*			if(Count1 <= 32'd200_000_000)
								begin
									
									Count1 <= Count1 + 32'd1;
									if(Count1 == 32'd25_000_000)//ʱ��ﵽ0.5S��������50M��ʱ�ӣ�
										Flash_sig <= 1'b0;//�����ź�Ϊ0
									else if(Count1 == 32'd50_000_000)//ʱ��ﵽ1.0S
										Flash_sig <= 1'b1;//�����ź�Ϊ1
									else if(Count1 == 32'd75_000_000)//�Դ�����
										Flash_sig <= 1'b0;
									else if(Count1 == 32'd100_000_000)
										Flash_sig <= 1'b1;
									else if(Count1 == 32'd125_000_000)
										Flash_sig <= 1'b0;
									else if(Count1 == 32'd150_000_000)
											begin
												Flash_sig <= 1'b1;
												Flash_over_sig <= 1'b1;
												Count1 <= 32'd0;
											end
									end */
								Game_status <= END;
								
							end
							else
								Game_status <= PLAY;
						end
		/*************************************/
	
				END://END״̬����Ϸ������ʱ�򣬳���һ�������������Ļ���
					begin
						
						if(Key_left | Key_right | Key_up | Key_down)
						begin
							Game_status <= START;
						//	Game_status <= END;
							Flash_sig <= 1'd1;//һֱ������
			//				Flash_over_sig <= 1'b0;
			//				Count1 <= 32'd0;
						end
			/*			else if(Count1 <= 32'd200_000_000)
						begin
						   
							Count1 <= Count1 + 32'd1;
							if(Count1 == 32'd25_000_000)//ʱ��ﵽ0.5S��������50M��ʱ�ӣ�
								Flash_sig <= 1'b0;//�����ź�Ϊ0
							else if(Count1 == 32'd50_000_000)//ʱ��ﵽ1.0S
								Flash_sig <= 1'b1;//�����ź�Ϊ1
							else if(Count1 == 32'd75_000_000)//�Դ�����
								Flash_sig <= 1'b0;
							else if(Count1 == 32'd100_000_000)
								Flash_sig <= 1'b1;
							else if(Count1 == 32'd125_000_000)
								Flash_sig <= 1'b0;
							else if(Count1 == 32'd150_000_000)
									begin
										Flash_sig <= 1'b1;
										Flash_over_sig <= 1'b1;
									end
						end */
						else
						begin
							Game_status <= END;
							Flash_sig <= 1'd1;//һֱ������
			//				Flash_over_sig <= 1'b0;
					//		Count1 <= 32'd0;
						end		
					end
			endcase
		end
	end
	
	endmodule
	
