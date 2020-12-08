#include <iostream>
#include <vector>
#include "math.h"
using namespace std;

int S(int N, vector <int> &A) {
    vector <int> B;
    int min = N + 1;
    for (int i = 0; i < A.size(); i++) {
        B.push_back(S(N - A[i], A));
        if (B[i] < min) {
            min = B[i];
        }
    }
    if (N == 0)  return 0;
    if (N < 0)  return N + 1;
    if (N > 0)  return min + 1;
}

int main() {
    int N;
    vector <int> Array;
    cin >> N;
    for (int i = 1; i <= sqrt(N); i++) {
        Array.push_back(pow(i, 2));
    }
    cout << S(N, Array);
    system("PAUSE");
    return 0;
}