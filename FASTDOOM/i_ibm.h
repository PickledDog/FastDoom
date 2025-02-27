#include "fastmath.h"
#include "ns_task.h"
#include "doomtype.h"


extern int ticcount;
extern fixed_t fps;

extern byte *currentscreen;

#if defined(MODE_Y) || defined(MODE_13H) || (defined(MODE_VBE2) && !defined(MODE_PM)) || defined(MODE_VBE2_DIRECT) || defined(MODE_V) || defined(MODE_V2)
extern byte processedpalette[14 * 768];
#endif
#if defined(MODE_VBE2) && defined(MODE_PM)
extern byte processedpalette[14 * 1024];
#endif

#if defined(MODE_T8025) || defined(MODE_T8050) || defined(MODE_EGA) || defined(MODE_T4025) || defined(MODE_T4050) || defined(MODE_T80100)
extern byte lut16colors[14 * 256];
extern byte *ptrlut16colors;
#endif

#if defined(USE_BACKBUFFER)
extern int updatestate;
#endif

#define I_NOUPDATE	0
#define I_FULLVIEW	1
#define I_STATBAR	2
#define I_MESSAGES	4
#define I_FULLSCRN	8

extern void I_TimerISR(task *task);
