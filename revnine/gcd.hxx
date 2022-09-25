/**
 * @file gcd.hxx
 * @brief for gcd functions
*/

#pragma once

#include <iostream>

/**
 * @brief Calculate the "greatest commom divisor" by using Eulcid's algorithm.
 * Note: gdc(0, 0) will return 0 and logs an error message to stderr
 * @param a first integer
 * @param b second integer
 * @return "greatest commom divisor" of a and b
*/
int64_t gcd(int64_t a, int64_t b);

/**
 * @brief Calculate the "greatest commom divisor" by using Eulcid's algorithm.
 * and finds the value of "x" and "y" for the equation "gcd(a, b) = a*x + b*y"
 * @param a first integer
 * @param b second integer
 * @param x the coefficient of "a" passed by reference
 * @param y the coefficient of "b" passed by reference
 * @return "greatest commom divisor" of "a" and "b" and computes the "x" and "y"
*/
int64_t gcd(int64_t a, int64_t b, int64_t& x, int64_t& y);
