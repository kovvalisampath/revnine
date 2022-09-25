#include "revnine.hxx"

/**
 * @brief testing.
*/

int main()
{
	int64_t x = NULL;
	int64_t y = NULL;
	int64_t a = 34;
	int64_t b = 126;

	if (a == NULL && b == NULL)
	{
		std::cout << "Enter a, b: ";
		std::cin >> a >> b;
	}

	if (a < b) std::swap(a, b);

	std::cout << "The gcd of " << a << ", " << b << "is: " << gcd(a, b, x, y) << std::endl;
	std::cout << x << ", " << y << std::endl;

}
