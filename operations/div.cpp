#include "../operations.h"
#include <stdexcept>

double op_div(double a, double b) {
    if (b == 0) throw std::runtime_error("Division by zero");
    return a / b;
}
