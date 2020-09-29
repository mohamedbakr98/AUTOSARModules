/* Board Support Package */
#include "Mcu.h"

__attribute__((naked)) void assert_failed (char const *file, int line) {
    /* TBD: damage control */
    Mcu_PerformReset(); /* reset the system */
}
