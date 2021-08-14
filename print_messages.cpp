#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bitset>

using namespace std;

int main() {
    string message {"++--HBO"};

    int n {35};
    int m {n};
    for (auto s:message) {
        // cout << s << endl;
        switch (s)
        {
        case '+':
            /* code */
            cout << ++m << endl;
            break;
        case '-':
            cout << --m << endl;
            break;
        case 'H':
            cout << hex << n << endl;
            break;            
        case 'B':
            std::bitset<8> y(n);
            cout << y << endl;
            break;
        case 'O':
            cout << oct << n << endl;
            break;
        default:
            break;
        }
    }
}