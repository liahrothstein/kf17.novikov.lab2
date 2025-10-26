#include <cmath>

double func5ValueCalculate(double x) {
    return (log(x + 0.5) + (pow(M_E, x) - pow(M_E, -x)));
}