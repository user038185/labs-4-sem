#include "Solution.h"
#include <vector>
#include <cmath>
Solution::Solution(int value)
{
        n = value;
}
Solution::~Solution()
{
}
bool Solution::search(int i,std::vector<int> v) {
            if (find(v.begin(), v.end(), i) != v.end()) {
                return true;
            }  
        return false;
    }


void Solution::isUnique(int n, std::vector<int> v) {
        if (n == 0) {           
            return;
        }
        for (int i = 0; i < 10; i++) {
            if (!search(i, v)) {
                count++;
                if (v.empty() && i == 0) {
                    continue; 
                }
                v.push_back(i);
                isUnique(n - 1, v);
                v.pop_back();
            }
            
        }
    }



int Solution::countNumbersWithUniqueDigits(int n) {
    
        if ((n < 0)||(n > 8)) {
            return 0;
        }
        if (n == 0) {
            return 1;
        }
        else {
            std::vector<int>digits;
            isUnique(n,digits);
            return count;
        }

    }


