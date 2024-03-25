#include "Header.h"
#include <iostream>
using namespace std;
int main() {
	int N;
	int a;
	cin >> N;
	vector<vector<int>> hasRoads (N,vector<int>(N));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> a;
			hasRoads[i][j] = a;
		}
	}
	Solution baza(hasRoads);
	cout << baza.findResortNum(hasRoads);
}