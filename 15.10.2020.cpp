#include "stdafx.h"
#include<iostream>
using namespace std;
int binpow(int x, int y, int n) {
	if (n == 0) return 1;
	if (n % 2 != 0) return (x*binpow(x, y, n - 1))%y;
	if (n % 2 == 0) return (binpow(x*x, y, n / 2))%y;
}


int main(){
	int x, y, n;
	cin >> x;
	cin >> n;
	cin >> y;
	cout << binpow(x, y, n);
	system("PAUSE");
    return 0;
}

