#include "gcd.hxx"

int64_t gcd(int64_t a, int64_t b)
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
		int64_t new_a = NULL;
		int64_t new_b = NULL;

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

int64_t gcd(int64_t a, int64_t b, int64_t& x, int64_t& y)
{
	if (b == 0)
	{
		x = 1;
		y = 0;

		return a;
	}

	int64_t new_x = NULL;
	int64_t new_y = NULL;

	int64_t divisor = gcd(b, a % b, new_x, new_y);

	x = new_y;
	y = new_x - (a / b) * new_y;

	return divisor;
}

