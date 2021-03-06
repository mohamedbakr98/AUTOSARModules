#ifndef OS_CFG_OS_COUNTER_CFG_H_
#define OS_CFG_OS_COUNTER_CFG_H_


#define COUNTERS_NUMBER 1


#define COUNTER_1       0
#define COUNTER_2       1


#define COUNTER_HARDWARE    0x55u
#define COUNTER_SOFTWARE    0xAAu


#define OS_COUNTERS_OBJECT_CONGIFURATION \
{\
    {\
    .OsCounterType = COUNTER_SOFTWARE \
    ,\
    .OsCounterTicksPerBase = 1u \
    ,\
    .OsCounterMaxAllowedValue = 10000u \
    ,\
    .OsCounterMinCycle = 0u \
    }\
}

#endif /* OS_CFG_OS_COUNTER_CFG_H_ */
