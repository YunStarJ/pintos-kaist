// 고정 소수점 산술을 위한 것
#include <stdint.h>
typedef int32_t fixedpoint;
fixedpoint convert_itof(int);
fixedpoint convert_ftoi(fixedpoint); //음수 부분 버림
fixedpoint convert_ftoi_rounding(fixedpoint);
fixedpoint fp_add(fixedpoint, fixedpoint);
fixedpoint fp_subtract(fixedpoint, fixedpoint);
fixedpoint fp_add_complex(int, fixedpoint);
fixedpoint fp_subtract_complex(int, fixedpoint);
fixedpoint fp_multiply(fixedpoint,fixedpoint);
fixedpoint fp_multiply_complex(int, fixedpoint);
fixedpoint fp_divide(fixedpoint, fixedpoint);
fixedpoint fp_divide_complex(int, fixedpoint);

#define f 16384
typedef int32_t fixedpoint;

fixedpoint convert_itof(int n){
    return n * f;
}
//음수 부분 버림
fixedpoint convert_ftoi(fixedpoint x){
    return x / f;
}
// 반올림?
fixedpoint convert_ftoi_rounding(fixedpoint x){
    if (x >= 0) return ((x + f)/2)/f;
    else return ((x - f)/2)/f;
}

fixedpoint fp_add(fixedpoint x, fixedpoint y){
    return x + y;
}

fixedpoint fp_subtract(fixedpoint x, fixedpoint y){
    return x - y;
}

fixedpoint fp_add_complex(int n, fixedpoint x){
    return x + n * f;
}

fixedpoint fp_subtract_complex(int n, fixedpoint x){
    return x - n * f;
}

fixedpoint fp_multiply(fixedpoint x,fixedpoint y){
    return ((int64_t) x) * y / f;
}

fixedpoint fp_multiply_complex(int n, fixedpoint x){
    return x * n;
}

fixedpoint fp_divide(fixedpoint x, fixedpoint y){
    return ((int64_t) x) * f / y;
}

fixedpoint fp_divide_complex(int n, fixedpoint x){
    return x / n;
}