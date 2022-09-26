#include "revnine.hxx"

/**
 * @brief testing.
 */

int main()
{
    int64_t x = 0;
    int64_t y = 0;
    int64_t a = 34;
    int64_t b = 126;

    if (a == 0 && b == 0)
    {
        std::cout << "Enter a, b: ";
        std::cin >> a >> b;
    }

    if (a < b) std::swap(a, b);

    std::cout << "The gcd of " << a << ", " << b << "is: " << gcd(a, b, x, y) << std::endl;
    std::cout << x << ", " << y << std::endl;

}
