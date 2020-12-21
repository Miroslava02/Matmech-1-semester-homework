#include <iostream>
using namespace std;

int compare(string& A, string& B, int i, int j) {
    if (A[i - 1] == B[j - 1]) {
        return 0;
    }
    else {
        return 1;
    }

}

int minimum(string& A, string& B) {
    int** D = new int* [A.length() + 1];
    for (int i = 0; i <= A.length(); i++) {
        D[i] = new int[B.length() + 1];
        for (int j = 0; j <= B.length(); j++) {
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
        if (i != 0) {
            delete[] D[i - 1];
        }
    }
    return D[A.size()][B.size()];
    delete D[A.size()];
}

int main() {
    string A, B;
    cin >> A;
    cin >> B;
    cout << minimum(A, B);
    system("PAUSE");
    return 0;
}
