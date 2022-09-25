#include "revnine.hxx"

/**
 * @brief Find the probablity of two integers in {1,...,n} are coprime.
*/

int main()
{
	size_t n = NULL;
	std::cout << "Enter n: ";
	std::cin >> n;

	size_t count = NULL;
	for (size_t a = 1; a < n + 1; a++)
	{
		for (size_t b = a + 1; b < n + 1; b++)
		{
			if (gcd(a, b) == 1) count++;
		}
	}

	count = 2 * count + 1;
	std::cout << count / (double(n) * n) << std::endl;

}
