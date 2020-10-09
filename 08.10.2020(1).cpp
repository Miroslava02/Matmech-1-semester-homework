//composite numbers less than n
#include "stdafx.h"
#include"math.h"
#include <vector>
#include <iostream>
using namespace std;
int main(){
	int n, p;
	cin >> n;
	vector<int> composite, temp;
	for (int i = 0; i < n; i++) {
		composite.push_back(i);
	}
	for (int p = 2; p < (sqrt(n)); p++) {
		if (composite[p] != 0) {
			for (int i = p*p; i < n; i += p) {
				composite[i] = 0;
			}
		}
	}
	for (int i = 4; i < n; i++) {
		if (composite[i] == 0) {
			temp.push_back(i);
			cout << i << ' ';
		}
	}
	composite.clear();
	composite = temp;
	system("PAUSE");
    return 0;
}

