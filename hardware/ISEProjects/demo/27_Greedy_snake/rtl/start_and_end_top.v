module start_and_end_top
(
	input CLK_40M,
	input RSTn,

	input [2:0] Game_status,//3����Ϸ״̬��START��001��PLAY��010��END��100��
//	input Flash_over_sig,
	
	
	input play_VGA_red,
	input play_VGA_green,
	input play_VGA_blue,
	input play_HSYNC_sig,
	input play_VSYNC_sig,
	
	
	
	output VSYNC_Sig_out,
	output HSYNC_Sig_out,
	output VGA_red_out,
	output VGA_green_out,
	output VGA_blue_out
);

	
	
	
	
	wire start_Vga_red;
	wire start_Hsync_sig;
	wire start_Vsync_sig;
	wire start_Vga_green;
	wire start_Vga_blue;
	
	wire end_Vsync_sig;
	wire end_Hsync_sig;
	wire end_Vga_red;
	wire end_Vga_blue;
	wire end_Vga_green;
	
//	wire start;
//	wire end_sig;
	
//	wire CLK_40M;
	
	
	start_top	start_top		//VGAͼ����ʾ����ģ�飬����Ҫע�����������ǰ��ӵ�ԭʼʱ�ӣ�û����PLL��Ƶ��ʱ�ӣ�
(								//����Ҫע�⣬���Ҫ��ʾ�����磩256x256��ͼ����Ҫ�޸ĵĵط���
	.CLK_40M(CLK_40M),					//1�������µ�mif�ļ�
	.RSTn(RSTn),					//2���ı�ԭ����Rom��λ��
	.start_Vga_green(start_Vga_green),			//3���޸�Vga_control�����λ��
	.start_Vga_blue(start_Vga_blue),			//4����ԭ����Rom�趨�������µ�mif�ļ�
	.start_Vga_red(start_Vga_red),
	.start_Hsync_sig(start_Hsync_sig),
	.start_Vsync_sig(start_Vsync_sig)
);

	end_top		end_top	//VGAͼ����ʾ����ģ�飬����Ҫע�����������ǰ��ӵ�ԭʼʱ�ӣ�û����PLL��Ƶ��ʱ�ӣ�
(								//����Ҫע�⣬���Ҫ��ʾ�����磩256x256��ͼ����Ҫ�޸ĵĵط���
	.CLK_40M(CLK_40M),					//1�������µ�mif�ļ�
	.RSTn(RSTn),					//2���ı�ԭ����Rom��λ��
	.end_Vga_green(end_Vga_green),			//3���޸�Vga_control�����λ��
	.end_Vga_blue(end_Vga_blue),			//4����ԭ����Rom�趨�������µ�mif�ļ�
	.end_Vga_red(end_Vga_red),
	
//	.Flash_over_sig(Flash_over_sig),
	
	.end_Hsync_sig(end_Hsync_sig),
	.end_Vsync_sig(end_Vsync_sig)
);
	

	
	vga_select_module 	vga_select_module
(
	//.CLK_40M(CLK_40M),					//1�������µ�mif�ļ�
	//.RSTn(RSTn),
	.play_VSYNC_Sig(play_VSYNC_sig),
	.play_HSYNC_Sig(play_HSYNC_sig),
	.play_VGA_red(play_VGA_red),
	.play_VGA_green(play_VGA_green),
	.play_VGA_blue(play_VGA_blue),
/*	
	.win_VSYNC_Sig(win_VSYNC_Sig),
	.win_HSYNC_Sig(win_HSYNC_Sig),
	.win_VGA_red(win_VGA_red),
	.win_VGA_green(win_VGA_green),
	.win_VGA_blue(win_VGA_blue),
*/	
	.end_VSYNC_Sig(end_Vsync_sig),
	.end_HSYNC_Sig(end_Hsync_sig),
	.end_VGA_red(end_Vga_red),
	.end_VGA_green(end_Vga_green),
	.end_VGA_blue(end_Vga_blue),
	
	.start_VGA_green(start_Vga_green),			//3���޸�Vga_control�����λ��
	.start_VGA_blue(start_Vga_blue),			//4����ԭ����Rom�趨�������µ�mif�ļ�
	.start_VGA_red(start_Vga_red),
	.start_HSYNC_Sig(start_Hsync_sig),
	.start_VSYNC_Sig(start_Vsync_sig),
	
/*	.play(play),
//	.win_sig(win_sig),

	
	.end_sig(end_sig),
	.start(start),*/
	
//	.Flash_over_sig(Flash_over_sig),
	.Game_status(Game_status),
	
	.VSYNC_Sig_out(VSYNC_Sig_out),
	.HSYNC_Sig_out(HSYNC_Sig_out),
	
	.VGA_red_out(VGA_red_out),
	.VGA_green_out(VGA_green_out),
	.VGA_blue_out(VGA_blue_out)
);
	
	
		
	
	
	
endmodule
