#include <cmath>

double func7ValueCalculate(double x, double c, double d, double k) {
    return pow(sin((c * x) + pow(d, 2) + (k * pow(x, 2))), 3);
}