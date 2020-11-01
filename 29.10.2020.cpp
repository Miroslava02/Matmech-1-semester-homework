#include "stdafx.h"
#include <vector>
#include <iostream>
using namespace std;

int main() {
	vector <int> A, B;
	int N;
	cout << "enter array length";
	cin >> N;
	int*Array = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> Array[i];
	}
	B.push_back(Array[0]);
	for (int j = 0; j < N - 1; j++) {
		if (Array[j + 1] >= Array[j]) {
			B.push_back(Array[j + 1]);
		}
		if ((j + 1 == N - 1) || Array[j + 1]<Array[j]) {
			if (B.size()>A.size()) {
				A.clear();
				A.assign(B.begin(), B.end());
			}
			B.clear();
		}
	}
	for (int i = 0; i < A.size(); i++) {
		cout << A[i] << " ";
	}
	system("PAUSE");
	return 0;
}


