#include <iostream>
#include <ctime>
#include <vector>
using namespace std;

int Min(int** &A, int m, int n) {
    int** D = new int* [m];
    for (int i = 0; i < m; i++) {
        D[i] = new int[n];
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if ((i != 0) && (j != 0)) {
                D[i][j] = min(min(D[i-1][n], D[i][j - 1]), min(D[i-1][j-1], D[i][j-1])) + A[i][j];
            }
            else if ((i != 0) && (j == 0)) {
                D[i][j] = D[i - 1][j] + A[i][j];
            }
            else if ((i == 0) && (j != 0)) {
                D[i][j] = D[i][j - 1] + A[i][j];
            }
            else if ((i == 0) && (j == 0)) {
                D[i][j] = A[i][j];
            }
        }
    }
    return D[m-1][n-1];
}

int main() {
    int m, n;
    cin >> m;
    cin >> n;
    int** Matrix = new int* [m];
    for (int i = 0; i < m; i++) {
        Matrix[i] = new int [n];
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            Matrix[i][j] = rand();
        }
    }
    cout << Min(Matrix, m, n);
    system("PAUSE");
    return 0;
}
