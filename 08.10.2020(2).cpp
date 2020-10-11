//нахождение первых n простых чисел
//согласно постулату Бертрана, между любым n>=2 и 2n найдётся по крайней мере одно простое число, поэтому проверять нужно не более 2^n чисел
//алгоритм Евклида - ложно-линейный, совершается n раз: сначала на промежутке {2}, затем на промежутке 2-4, 2-8, влоть до 2-2^n. Асимптотическая сложность алгоритма - n^2 
#include "stdafx.h"
#include <vector>
#include <cstdio>
#include <iostream>
#include "math.h"
using namespace std;

int main() {
	int n, N;
	cin >> n;
	vector<int> prime;
	N = 2;
	int*A = new int[pow(2, n)];
	for (int i = 0; i < pow(2, n); i++) {
		A[i] = i;
	}
	while (N <= pow(2, n)) {
		for (int p = 2; p < sqrt(N); p++) {
			for (int i = p*p; i < N;i += p) {
				A[i] = 0;
			}
		};
		N *= 2;
	}
	for (int i = 2; i < pow(2,n); i++) {
		if ((prime.size() < n) && (A[i] != 0)) {
			prime.push_back(i);
			cout << i << " ";
		}
	}
	system("PAUSE");
	return 0;
}

