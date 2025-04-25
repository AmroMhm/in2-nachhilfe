#include "math.h"

int global_var = 50;

double mul_sub(int a, int b) {
    double m_tmp = mul(a,b);
    int s_tmp = a - b;
    return m_tmp + s_tmp;
}