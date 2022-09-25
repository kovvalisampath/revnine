#include "gcd.hxx"

size_t gcd(size_t a, size_t b)
{
	if (a < 0) a = -a;
	if (b < 0) b = -b;

	else if (a == 0 && b == 0)
	{
		std::cerr << "WARNING: gcd called with both arguments with 0\n";
		return 0;
	}

	else if (a == 0 || b == 0)
	{
		return a > b ? a : b;
	}

	else
	{
		size_t new_a = NULL;
		size_t new_b = NULL;
		
		while (b != 0)
		{
			new_a = b;
			new_b = a % b;

			a = new_a;
			b = new_b;
		}

		return a;
	}
}