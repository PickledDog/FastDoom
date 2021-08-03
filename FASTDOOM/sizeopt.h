#ifndef __SIZEOPT__
#define __SIZEOPT__

#if defined(MODE_T8025) || defined(MODE_T8050)
#define scaledviewwidth 80
#define viewwidth 80
#define viewheight 50
#define viewwidthlimit 79
#define viewwindowx 0
#define viewwindowy 0
#define centerx 40
#define centery 25
#define centerxfrac 2621440
#define centeryfrac 1638400
#define centeryfracshifted 102400
#define projection 2621440
#define iprojection 419430
#define pspritescale 16384
#define pspriteiscale 262144
#define pspriteiscaleshifted 262144
#endif

#if defined(MODE_T80100)
#define scaledviewwidth 160
#define viewwidth 80
#define viewheight 100
#define viewwidthlimit 79
#define viewwindowx 0
#define viewwindowy 0
#define centerx 40
#define centery 50
#define centerxfrac 2621440
#define centeryfrac 3276800
#define centeryfracshifted 204800
#define projection 2621440
#define iprojection 419430
#define pspritescale 16384
#define pspriteiscale 262144
#define pspriteiscaleshifted 131072
#endif

#endif
