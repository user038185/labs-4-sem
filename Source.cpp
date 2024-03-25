#include "Header.h"
Solution::Solution(std::vector<std::vector<int>>& isConnected)
{
     count_baze = 0;
     size = isConnected.size();
     for (int i = 0; i < 200; i++) {
         visited[i] = 0;
     }
}
void Solution::visit(std::vector<std::vector<int>>& isConnected, int begin){
    visited[begin] = 1;
    for (int i = 0; i < size; i++) {
        if (!visited[i] && isConnected[begin][i]) {
            visit(isConnected, i);
        }
    }
}
int Solution::findResortNum(std::vector<std::vector<int>>& isConnected){ 
    for (int i = 0; i < size; i++) {
        if (! visited[i]) {
            visit(isConnected, i);
            count_baze+=1;
        }
    }
    return count_baze;
}