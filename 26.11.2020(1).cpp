#include <iostream>
#include <conio.h>
#include <ctime>
#include <vector>
using namespace std;

int Min(const unsigned int m, const unsigned int n, unsigned int A[m][n]) {
    if ((m != 0) && (n != 0)) {
        return min(Min(&A, m - 1, n), Min(&A, m, n - 1), Min(&A, m - 1, n - 1)) + A[m][n];
    }

    if ((m != 0) && (n == 0)) {
        return A[m][0] + Min(&A, m - 1, n);
    }

    if ((m == 0) && (n != 0)) {
        return A[0][n] + Min(&A, m, n - 1);
    }
    if ((m == 0) && (n == 0)) {
        return A[0][0];
    }

}

int main() {
    unsigned int x, y;
    cin >> x >> y;
    const unsigned int m = x;
    const unsigned int n = y;
    unsigned int Matrix[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            Matrix[i][j] = rand();
        }
    }
    cout << Min(&Matrix, m, n);
    system("PAUSE");
    return 0;
}