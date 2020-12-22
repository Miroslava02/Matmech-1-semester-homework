#include <iostream>
#include <vector>
using namespace std;

int sum(int n, int k, int*& S, int*& W) {
	int** D = new int* [k + 1];
	for (int i = 0; i <= k; i++) {
		D[i] = new int[n + 1];
		for (int j = 0; j <= n; j++) {
			if (i == 0 or j == 0) {
				D[i][j] = 0;
			}
			else {
				if (W[i] <= j) {
					D[i][j] = max(D[i - 1][j - W[i]] + S[i], D[i - 1][j]);
				}
				else {
					D[i][j] = D[i - 1][j];
				}
			}
		}
		if (i != 0) {
			delete[] D[i - 1];
		}
	}
	int s = D[k][n];
	delete[] D[k];
	delete[] D;
	delete D;
	return s;
}

int main() {
	int n, k;
	cin >> n;
	cin >> k;
	int* Sum = new int[k + 1];
	int* Weight = new int[k + 1];
	Sum[0] = 0;
	Weight[0] = 0;
	for (int i = 1; i <= k; i++) {
		cout << "enter price";
		cin >> Sum[i];
		cout << "enter weight";
		cin >> Weight[i];
	}
	cout << sum(n, k, Sum, Weight);
	delete[] Sum;
	delete[] Weight;
	system("PAUSE");
	return(0);
}
