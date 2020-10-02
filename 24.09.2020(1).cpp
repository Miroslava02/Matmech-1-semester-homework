#include "stdafx.h"
#include <iostream>
using namespace std;


int nod(int a, int b) {
	if (b == 0) return a;
	return nod(b, a%b);
}


struct rational {
	int m;
	unsigned int n;
	rational(int x, int y) {
		m = x / nod(x, y);
		n = y / nod(x, y);
	}
    rational operator*=(rational A) {
			m *= A.m;
			n *= A.n;
			m = m / nod(m, n);
			n = n / nod(m, n);
			return rational(m, n);
		}
	rational &operator*=(int A) {
		    m *= A;
			m = m / nod(m, n);
			n = n / nod(m, n);
			return rational(m, n);
        }
};


int main() {
	int m, a, N;
	unsigned int n, b;
	cin >> m;
	cin >> n;
	cin >> a;
	cin >> b;
	rational A(m, n);
	rational C(m, n);
	rational B(a, b);
	A.operator*=(B);
	cout << A.m << "/" << A.n;
	cin >> N;
	C.operator*=(N);
	cout << C.m << "/" << C.n;
	system("PAUSE");
	return 0;
}


