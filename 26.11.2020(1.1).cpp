#include <iostream>
#include <vector>
#include "math.h"
using namespace std;

int S(int N) {
    double a = sqrt(N);
    int b = int(a);
    int** D = new int* [b+1];
    for (int i = 0; i <= sqrt(N); i++) {
        D[i] = new int[N + 1];
    }
    for (int i = 0; i <= sqrt(N); i++) {
        for (int j = 0; j <= N; j++) {
            if ((i == 0) or (j == 0)) {
                D[i][j] = 0;
            }
            else {
                D[i][j] = min(D[i - 1][j], (D[i][j - i * i] + 1));
            }
        }
    }
    return D[b][N];
}

int main() {
    int N;
    cin >> N;
    cout << S(N);
    system("PAUSE");
    return 0;
}