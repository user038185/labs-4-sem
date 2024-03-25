#include"Solution.h"
#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	Solution number(n);
	cout << number.countNumbersWithUniqueDigits(n);
}