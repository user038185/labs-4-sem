#pragma once
#include <vector>
class Solution {
    int count_baze;
    int size;
    int visited[200];
public:
    Solution(std::vector<std::vector<int>>& isConnected);
    void visit(std::vector<std::vector<int>>& isConnected, int begin);
    int findResortNum(std::vector<std::vector<int>>& isConnected);
};
