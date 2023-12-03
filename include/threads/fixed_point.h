#include <stdint.h>

#define NICE_DEFAULT 0
#define RECENT_CPU_DEFAULT 0
#define LOAD_AVG_DEFAULT 0

typedef int32_t fixedpoint;

fixedpoint int_to_fp(int);
fixedpoint fp_to_int(fixedpoint); //음수 부분 버림
fixedpoint fp_to_int_round(fixedpoint);

fixedpoint add_fp(fixedpoint, fixedpoint);
fixedpoint sub_fp(fixedpoint, fixedpoint);
fixedpoint add_mixed(int, fixedpoint);
fixedpoint sub_mixed(int, fixedpoint);
fixedpoint mult_fp(fixedpoint,fixedpoint);
fixedpoint mult_mixed(int, fixedpoint);
fixedpoint div_fp(fixedpoint, fixedpoint);
fixedpoint div_mixed(int, fixedpoint);