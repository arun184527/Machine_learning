#include <math.h>
#include "../include/logarithm.h"

double logarithm(double x) {
    if(x <= 0) return 0;
    return log10(x);
}

double naturalLog(double x) {
    if(x <= 0) return 0;
    return log(x);
}
