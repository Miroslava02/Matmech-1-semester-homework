#include <iostream>
#include <ctime>
#include <vector>
using namespace std;

int Min(int** &A, int m, int n) {
    int** D = new int*[m];
    for (int i = 0; i < m; i++) {
        D[i] = new int[n];
        for (int j = 0; j < n; j++) {
            if ((i != 0) && (j != 0)) {
                D[i][j] = min(min(D[i - 1][j], D[i][j - 1]), D[i - 1][j - 1]) + A[i][j];
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
        if (i != 0) {
            delete[] D[i - 1];
        }
    }
    return D[m - 1][n - 1];
    delete[] D[m - 1];
}

int main() {
    int m, n;
    cin >> m;
    cin >> n;
    int** Matrix = new int* [m];
    for (int i = 0; i < m; i++) {
        Matrix[i] = new int[n];
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            Matrix[i][j] = rand();
        }
    }
    cout << Min(Matrix, m, n);
    for (int i = 0; i < m; i++) {
        delete[] Matrix[i];
    }
    system("PAUSE");
    return 0;
}
