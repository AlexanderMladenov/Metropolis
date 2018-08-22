# include <iostream>
#include <embree3/rtcore.h>

#include "xmmintrin.h"
#include "pmmintrin.h"



int main()
{
  _MM_SET_FLUSH_ZERO_MODE(_MM_FLUSH_ZERO_ON);
  _MM_SET_DENORMALS_ZERO_MODE(_MM_DENORMALS_ZERO_ON);
  /* create new Embree device */
  RTCDevice device = rtcNewDevice("verbose=1");

  /* ddelete device again */
  rtcReleaseDevice(device);
  for (;;) {}
  return 0;


}