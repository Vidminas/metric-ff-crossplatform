#ifndef _TIMES_H
#define _TIMES_H

#include <sys/types.h>
#include <sys/timeb.h>

#ifndef _WIN32
#include <sys/times.h>
#else
#define __need_clock_t
#include <time.h>

#ifndef __MINGW32__
/* from <winsock2.h> */
typedef struct timeval
{
  long tv_sec;
  long tv_usec;
} TIMEVAL, *PTIMEVAL, *LPTIMEVAL;
#endif /* __MING32__ */

int gettimeofday(struct timeval *t, void *timezone);

/* from linux's sys/times.h */

/* Structure describing CPU time used by a process and its children.  */
struct tms
{
  clock_t tms_utime; /* User CPU time.  */
  clock_t tms_stime; /* System CPU time.  */

  clock_t tms_cutime; /* User CPU time of dead children.  */
  clock_t tms_cstime; /* System CPU time of dead children.  */
};

/* Store the CPU time used by this process and all its
  dead children (and their dead children) in BUFFER.
  Return the elapsed real time, or (clock_t) -1 for errors.
  All times are in CLK_TCKths of a second.  */
clock_t times(struct tms *__buffer);

typedef long long suseconds_t;

#endif /* _WIN32 */

#endif /* _TIMES_H */