#include <iostream>
#include <ctime>
using namespace std;

int compare(string &A, string &B, int a, int b) {
    int s = 0;
    for (int i = 0; i < min(a, b); i++) {
        if (A[i] != B[i]);
        s += 1;
    }
    retiurn s;
}

int minimum(string &A, string &B) {
    int** D = new int*[A.size()]
    for (int i = 0; i < B.size(); i++) {
            D[i] = new int[B.size()];
    }
    for (int i = 0; i < A.size(); i++) {
        for (int j = 0; j < B.size(); j++) {
            if ((i != 0) && (j != 0)) {
                D[i][j] = min(min(D[i - 1][j] + 1, D[i][j - 1] + 1), D[i - 1][j - 1] + compare(A, B, i, j));
            }
            else if (j == 0) {
                D[i][j] = i;
            }
            else if (i == 0) {
                D[i][j] = j;
            }
            
        }
        return D[A.size()][B.size()]
    }
}

int main() {
    string A, B;
    cout << minimum(A, B);
    system("PAUSE");
    return 0;
}
