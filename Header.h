#pragma once
#include <vector>
#include <cmath>

class Solution {
    int n;
public:
    Solution(int value);
    ~Solution();
    bool search(int i, std::vector<int> v);
    void isUnique(int n, std::vector<int> v);
    int countNumbersWithUniqueDigits(int n);
};
static int count = 0;
