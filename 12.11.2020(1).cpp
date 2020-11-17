#include "math.h"
#include <vector>
#include <iostream>
using namespace std;

int search(vector <int> A, int k) {
	vector <int> Left;
	vector <int> Right;
	for (int i = 1; i < A.size(); i++) {
		if (A[i] < A[0]) {
			Left.push_back(A[i]);
		}
		else {
			Right.push_back(A[i]);
		}
	}
	if (A[Left.size()] == k) return(A[0]);
	if ((A[0] < k) && (Right.size() != 0))return search(Right, k);
	if ((A[0] < k) && (Right.size() == 0))return 0;
	if ((A[0] > k) && (Left.size() != 0)) return search(Left, k);
	if ((A[0] > k) && (Left.size() == 0)) return 0;
}

int main() {
	int k;
	int n;
	vector <int> prime;
	cin >> k;
	int* composite = new int[k];
	cin >> n;
	int* Array = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> Array[i];
	}
	for (int i = 0; i < k; i++) {
		composite[i] = i;
	}
	for (int p = 2; p < (sqrt(k)); p++) {
		if (composite[p] != 0) {
			for (int i = p * p; i < k; i += p) {
				composite[i] = 0;
			}
		}
	}
	for (int i = 2; i < k; i++) {
		if (composite[i] != 0) {
			prime.push_back(composite[i]);
		}
	}
	for (int i = 0; i < n; i++) {
		if (search(prime, Array[i]) != 0) {
			cout << Array[i] << " ";
		}
	}
	system("PAUSE");
	return 0;
}