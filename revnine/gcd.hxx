#pragma once

#include <iostream>

/**
 * @brief Calculate the "greatest commom divisor" by using Eulcid's algorithm.
 * Note: gdc(0, 0) will return 0 and logs an error message to stderr
 * @param a first integer
 * @param b second integer
 * @return "greatest commom divisor" of a and b
*/
size_t gcd(size_t a, size_t b);
