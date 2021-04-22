class Solution {
public:
    int findNthDigit(int n) 
{
	long long range_number_length = 1;
	long long num = 1;
	long long range = 9;

	while (n > range * range_number_length)
	{
		n -= range * range_number_length;
		range_number_length++;

		num += range;
		range *= 10;
	}

	num += (n - 1) / range_number_length;
	return to_string(num).at((n - 1) % range_number_length) - '0';
}
};