//�������������ʵ�ֵĹ��ܣ� Left�󰴼�(AX309-KEY1)��̰��������
//                        Right�Ұ���(AX309-KEY2)��̰��������
//                        Up�ϰ���(AX309-KEY3)��̰��������
//                        Down�¼���(AX309-KEY4)��̰��������


module Greedy_snake//̰���߶���ģ��
(
	input Clk,//50MHZ��ȫ��ʱ��
	input Rst_n,//ȫ�ָ�λ�ź�
	
	input Left,//�󰴼�
	input Right,//�Ұ���
	input Up,//�ϰ���
	input Down,//�°���

//	output Hsync_sig,//��ͬ���ź�
//	output Vsync_sig,//��ͬ���ź�
	
	output VSYNC_Sig_out,
	output HSYNC_Sig_out,
	output [4:0] VGA_red_o,
	output [5:0] VGA_green_o,
	output [4:0] VGA_blue_o,
	output vga_clk,
	output vga_blank,
	output vga_sync,
	
	output [7:0] Smg_duan,//����ܶ�ѡ
	output [3:0] Smg_we//�����λѡ
	
);
/***************************************************************************/
	
	assign VGA_red_o = {5{VGA_red_out}};
	assign VGA_green_o = {6{VGA_green_out}};
	assign VGA_blue_o = {5{VGA_blue_out}};
	 
	wire VGA_red_out;
	wire VGA_green_out;
	wire VGA_blue_out; 
	
	assign vga_clk = ~Clk_25mhz;
	assign vga_blank = VSYNC_Sig_out & HSYNC_Sig_out;
	assign vga_sync = 1'b0;
	wire Clk_50mhz;
	wire Clk_25mhz;	
	
	Snake_pll	U1 //PLL��Ƶģ��
	(
		.CLK_IN1(Clk),
		.CLK_OUT1(Clk_50mhz),
		.CLK_OUT2(Clk_25mhz),
		.RESET(1'b0),
		.LOCKED()		
		
	);
	

/***************************************************************************/
	
	wire Key_left;//�󰴼�
	wire Key_right;//�Ұ���
	wire Key_up;//�ϰ���
	wire Key_down;//�°���
	
	wire [2:0] Game_status;//3����Ϸ״̬��START��001��PLAY��010��END��100��
	
	wire Hit_wall_sig;//ײǽ�ź�
	wire Hit_body_sig;//ײ���Լ�������ź�
	
	wire Flash_sig;//�����ź�
	wire Restart_sig;//���¿�ʼ�ź�
	
	wire play_VGA_red;
	wire play_VGA_green;
	wire play_VGA_blue;
	
	wire play_HSYNC_sig;
	wire play_VSYNC_sig;	
	
	Game_ctrl_module	 U2//��Ϸ����ģ��
	(
		.Clk_50mhz(Clk_50mhz),
		.Rst_n(Rst_n),
		
		.Key_left(Key_left),
		.Key_right(Key_right),
		.Key_up(Key_up),
		.Key_down(Key_down),
	/*	
		.Left(Left),
		.Right(Right),
		.Up(Up),
		.Down(Down),
		*/
		
		.Game_status(Game_status),
		
		.Hit_wall_sig(Hit_wall_sig),
		.Hit_body_sig(Hit_body_sig),
		
		.Flash_sig(Flash_sig)
	//	.Restart_sig(Restart_sig),
//		.Flash_over_sig(Flash_over_sig)
	);
		
/***************************************************************************/
//	wire Flash_over_sig;
	
	
	wire [5:0] Apple_x;//ƻ����X����
	wire [4:0] Apple_y;//ƻ����Y����

	wire [5:0] Head_x;//��ͷ����X����
	wire [5:0] Head_y;//��ͷ����Y����

	wire Body_add_sig;//������������ź�

		Apple_generate_module	 U3//ƻ������ģ��
	(
		.Clk_50mhz(Clk_50mhz),
		.Rst_n(Rst_n),
		
		.Apple_x(Apple_x),
		.Apple_y(Apple_y),
		
		.Head_x(Head_x),
		.Head_y(Head_y),
		
		.Body_add_sig(Body_add_sig)
	);
	
/***************************************************************************/
	
	wire [1:0] Object;//����
	
	wire [9:0] Pixel_x;//ɨ������ص�X����
	wire [9:0] Pixel_y;//ɨ������ص�Y����
	
	wire [6:0] Body_num;//��������ĳ��ȣ������16�������ǿ��Ըĵ�

	Snake_ctrl_module		U4//���˶�����ģ��
	(
		.Clk_50mhz(Clk_50mhz),
		.Rst_n(Rst_n),
		
		.Key_left(Key_left),
		.Key_right(Key_right),
		.Key_up(Key_up),
		.Key_down(Key_down),
		
		.Object(Object),
		
		.Pixel_x(Pixel_x),
		.Pixel_y(Pixel_y),
		
		.Head_x(Head_x),
		.Head_y(Head_y),
		
		.Body_add_sig(Body_add_sig),
		.Game_status(Game_status),
//		.Body_num(Body_num),
		
		.Hit_body_sig(Hit_body_sig),
		.Hit_wall_sig(Hit_wall_sig),
		
		.Flash_sig(Flash_sig)
	);
	
/***************************************************************************/	
	
	Vga_ctrl_module	 U5//VGA����ģ��
	(
		.Clk_25mhz(Clk_25mhz),
		.Rst_n(Rst_n),
		
		.Hsync_sig(play_HSYNC_sig),
		.Vsync_sig(play_VSYNC_sig),
		
		.Object(Object),
		
		.play_VGA_red(play_VGA_red),
		.play_VGA_green(play_VGA_green),
		.play_VGA_blue(play_VGA_blue),
		
		.Pixel_x(Pixel_x),
		.Pixel_y(Pixel_y),
		
		.Apple_x(Apple_x),
		.Apple_y(Apple_y)
	);

	
	
/***************************************************************************/

	Key_check_module	 U6//�������ģ��
	(
		.Clk_50mhz(Clk_50mhz),
		.Rst_n(Rst_n),
		
		.Left(Left),
		.Right(Right),
		.Up(Up),
		.Down(Down),
		
		.Key_left(Key_left),
		.Key_right(Key_right),
		.Key_up(Key_up),
		.Key_down(Key_down)		
	);
	
/***************************************************************************/
	
	Smg_display_module	 U7//�������ʾģ��
	(
		.Clk_50mhz(Clk_50mhz),
		.Rst_n(Rst_n),	
		
		.Body_add_sig(Body_add_sig),
		.Game_status(Game_status),
		
		.Smg_duan(Smg_duan),
		.Smg_we(Smg_we)
	);
	
	

//	wire start;
//	wire end_sig;
//	wire CLK;
	start_and_end_top		U8
(
	.CLK_40M(Clk_25mhz),
	.RSTn(Rst_n),
	/*
	.start(start),
	.end_sig(end_sig),
	.play(play),
	*/
	.Game_status(Game_status),
//	.Flash_over_sig(Flash_over_sig),
	
	.play_VGA_red(play_VGA_red),
	.play_VGA_green(play_VGA_green),
	.play_VGA_blue(play_VGA_blue),
	.play_HSYNC_sig(play_HSYNC_sig),
	.play_VSYNC_sig(play_VSYNC_sig),
	
	
	.VSYNC_Sig_out(VSYNC_Sig_out),
	.HSYNC_Sig_out(HSYNC_Sig_out),
	.VGA_red_out(VGA_red_out),
	.VGA_green_out(VGA_green_out),
	.VGA_blue_out(VGA_blue_out)
);
	
	
	
	
	
	
endmodule
