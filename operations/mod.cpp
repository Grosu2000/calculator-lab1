#include "../operations.h"
#include <cmath>
#include <stdexcept>
double op_mod(double a, double b) {
    if (b == 0) throw std::runtime_error("Modulo by zero");
    return std::fmod(a, b);
}
