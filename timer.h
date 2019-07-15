#ifndef TIMER_H
#define TIMER_H

#include <time.h>

 struct timespec time_diff(const struct timespec *start, const struct timespec *end);

 struct timespec time_now();

 F64 time_delta(const struct timespec *start, const struct timespec *end);

 F64 time_to_double(const struct timespec *ts);

#endif /* ifndef TIMER_H */
