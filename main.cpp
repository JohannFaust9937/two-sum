#include <cstdio>
#include "two-sum.h"

int main()
{
	printf("https://leetcode.com/problems/two-sum/ :\n\n");
	Solution solution{};
	std::vector<int> vector{-5, -2, -16, 45, 76, 100, 5, 1, 4, 0, 2, 7, 11, 15};
	                       //0...1....2...3...4....5..6..7..8..9.10.11..12..13
	printf("%i and %i is an answer!", solution.twoSum(vector, 18)[1], solution.twoSum(vector, 18)[0]);
	return 0;
}
