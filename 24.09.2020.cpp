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
		cout << m << "/" << n;
	}
};


int main() {
	int m;
	unsigned int n;
	cin >> m;
	cin >> n;
	rational(m, n);
	system ("PAUSE");
	return 0;
}

