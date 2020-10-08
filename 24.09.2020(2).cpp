//удаляет из массива чётные элементы
#include "stdafx.h"
#include <vector>
#include <iostream>
using namespace std;
int main() {
	int N, x;
	vector<int> temp;
	cin >> N;
	vector<int> A;
	for (int i = 0; i < N; i++) {
		cin >> x;
		A.push_back(x);
	}
	for (int i = 0; i < N; i++) {
		if (A[i] % 2 != 0) temp.push_back(A[i]);
	}
	A.clear();
	A = temp;
	for (int i = 0; i < A.size(); i++) {
		cout << A[i]<<" ";
	}
	system("PAUSE");
	return 0;
}


