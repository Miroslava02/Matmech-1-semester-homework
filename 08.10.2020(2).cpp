//���������� ������ n ������� �����
//�������� ��������� ��������, ����� ����� n>=2 � 2n ������� �� ������� ���� ���� ������� �����, ������� ��������� ����� �� ����� 2^n �����
//�������� ������� - �����-��������, ����������� n ���: ������� �� ���������� {2}, ����� �� ���������� 2-4, 2-8, ����� �� 2-2^n. ��������������� ��������� ��������� - n^2 
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

