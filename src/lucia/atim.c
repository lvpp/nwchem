/*---------------------------------------------------------------------------*
 *                  timer routine                                            *
 *---------------------------------------------------------------------------*/

#include <sys/times.h>

/*---------------------------------------------------------------------------*/

void    atim_(double * cpu, double * wall)
{
  struct  tms  buf;

  times(&buf);

  *cpu  =       buf.tms_utime / 100.0;
  *wall = *cpu + buf.tms_stime / 100.0;

}

