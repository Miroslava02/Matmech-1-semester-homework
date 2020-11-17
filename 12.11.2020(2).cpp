//ищем количество подпоследовательностей в массиве длины n, cумма элементов которых не превышает K
//
#include <iostream>
using namespace std;


int main(){
	 int i = 0;
	 int j = 1;
	 int S = 0;
	 int R = 0;
	 int n;
	 cin >> n;
	 int K;
	 cin >> K;
	 int* A = new int [n];
	 for (int i = 0; i < n; i++) {
		 cin >> A[i];
	 }
	 while (i < n - 1) {
		 i++;
		 S += A[i];
		 while ((S > K) && (j < i)) {
			 S -= A[j];
			 j++;
		 }
		 if (j <= i) {
			 R += i + 1 - j;
		 }
		 else S += 0;
	 }
	 cout << R;
	 system("PAUSE");
	 return 0;
}

