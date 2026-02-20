
#define VGA_WIDTH  640
#define VGA_HEIGHT 480  //  480 or 468

#if VGA_HEIGHT==480
#define CXMAX 80
#define CFMAX 18
#define CLMAX 26
#define MXB 81	// X方向の最大バイト数(80ByteにFPを追加)
#define MYB 480	// Y方向の最大ライン数
#define MXBOFS 1
#define VRAMEP 2
#define Tim2Period 2720
#define CH1Pulse   2560
#else
#define CXMAX 80
#define CFMAX 18
#define CLMAX 26
#define MXB 82	// X方向の最大バイト数(80ByteにFPとEPを追加)
#define MYB 468	// Y方向の最大ライン数
#define MXBOFS 2
#define VRAMEP 2
#define Tim2Period 2784
#define CH1Pulse   2592
#endif

#define HDMASTART 30
#define VSSTART   515
#define VSPULSE   2
#define VSEND     525

