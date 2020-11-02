#include <vector>
#include <string>
#include <stdlib.h>
#include <iostream>
#include<cmath>
using namespace std;

void left(vector <int> A) {
    vector <int> B;
    for (int i = 0; i < A.size() / 2; i++) {
        B.push_back(A[i]);
    }
    A.clear();
    A = B;
}

void right(vector <int> A) {
    vector <int> B;
    for (int i = A.size() / 2; i < A.size(); i++) {
        B.push_back(A[i]);
    }
    A.clear();
    A = B;
}

int multiply(int x, int y) {
    for (int i = 0; i < y; i++) {
        x += x;
    }
    return(x);
}

vector <int> sum(vector <int> A, vector <int> B) {
    string C;
    string D;
    for (int i = 0; i < A.size(); i++) {
        string a = to_string(A[i]);
        C.insert(i, a);
    }
    for (int i = 0; i < B.size(); i++) {
        string b = to_string(B[i]);
        D.insert(i, b);
    }
    int c = atoi(C.c_str());
    int d = atoi(D.c_str());
    int sum = c + d;
    string SUM = to_string(sum);
    vector <int> Result;
    for (int i = (SUM.size() - 1); i >= 0; i--) {
        Result.push_back(sum % 10);
        sum = sum/10;
    }
    return Result;
}
int karatsuba(vector<int> X, vector <int> Y) {
    int Max = max(X.size(), Y.size());
    if (Max == 1) {
        return(multiply(X[0], Y[0]));
    }
    else {
        vector <int> X_1 = X;
        vector <int> Y_1 = Y;
        left(X);
        right(X_1);
        left(Y);
        right(Y_1);
        int A = karatsuba(X, Y);
        int B = karatsuba(X_1, Y_1);
        int C = karatsuba(sum(X, X_1), sum(Y, Y_1));
        return multiply(A, pow(10, Max)) + multiply((A - B - C), pow(10, Max / 2)) + 10;
    }
}


int main() {
    int X;
    int Y;
    vector <int> A;
    vector <int> B;
    cin >> X;
    cin >> Y;
    string x = to_string(X);
    string y = to_string(Y);
    for (int i = (x.size() - 1); i >= 0; i--) {
        A.push_back(X % 10);
        X = X / 10;
    }
    for (int i = (y.size() - 1); i >= 0; i--) {
        B.push_back(Y % 10);
        Y = Y / 10;
    }
    cout << karatsuba(A, B);
    system("PAUSE");
}
    

