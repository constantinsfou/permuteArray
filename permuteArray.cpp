#include <iostream>
#include <vector>

using namespace std;
// you can use includes, for example:
// #include <algorithm>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;


void RotateOnce(vector<int> &);

int main() {
// vector<int> solution(vector<int> &A, int K) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int> A {3,7,8,9,6};
    int K {1};
    for (int i {0}; i<K; i++) {
    RotateOnce(A);

    }

    for (auto a:A) {
        cout << a << ", ";
    }
    cout << endl;

    // return A;
    return 0;
    
}

void RotateOnce(vector<int> &A) {
    int N = A.size();
    int aend = A.at(N-1);
    for (int i {N-1}; i>0 ; i--) {
        A.at(i) = A.at(i-1);
    }
    A.at(0) = aend;
}