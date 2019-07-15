# System_Time


Using clock_gettime to get system clock.
## Description

int clock_gettime(clockid_t clk_id, struct timespec *tp);

the tp argument is timespect struct,as specified in <time.h>


struct timespec {
        time_t   tv_sec;        /* seconds */
        long     tv_nsec;       /* nanoseconds */
};


## function description
-- time(now): get clock time at this time stamp
-- time_diff(const struct timespec *start, const struct timespec *end): get time difference between two time points
-- time_to_double(const struct timespec *ts): convert time to double type
-- time_delta(const struct timespec *start, const struct timespec *end): get time difference and convert it to double
