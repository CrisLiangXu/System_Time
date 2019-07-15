
#include "timer.h"

 /* get clock real time */
 struct timespec time_now()
 {
         struct timespec ts;
         clock_gettime(CLOCK_REALTIME, &ts);

         return ts;
 }

/* Calculate time difference */
 struct timespec time_diff(const struct timespec *start, const struct timespec *end)
 {
         struct timespec diff = {
                 .tv_sec  = end->tv_sec  - start->tv_sec,
                 .tv_nsec = end->tv_nsec - start->tv_nsec
         };

         if (diff.tv_nsec < 0) {
                 diff.tv_sec  -= 1;
                 diff.tv_nsec += 1000000000;
         }
         return diff;
 }

 /* convert time to double */
 F64 time_to_double(const struct timespec *ts)
 {
          return (F64) (ts->tv_sec) + ((F64) (ts->tv_nsec) * 1e-9);
 }

/* Calculate time difference and return double type */
 F64 time_delta(const struct timespec *start, const struct timespec *end)
 {
         struct timespec diff = time_diff(start, end);
         return time_to_double(&diff);
 }


