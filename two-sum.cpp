#include "two-sum.h"
#include <unordered_map>

using namespace std;

std::vector<int> Solution::twoSum(std::vector<int>& numbers, int sum) {

    unordered_map<int, int> buffer;

    for (int index = 0; index < numbers.size(); ++index) {
        if (buffer.find(sum - numbers[index]) != buffer.end())
            return { index, buffer[sum - numbers[index]] };
        buffer[numbers[index]] = index;
    }

    return {};
}