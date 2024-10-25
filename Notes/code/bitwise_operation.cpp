
#include <bits/stdc++.h>
using namespace std;

int main(){
    // AND
    int a = 7, b = 4;
    int p = a & b;
    cout <<"a & b = " << p << endl;
    // OR
    int c = 7, d = 4;
    int q = c | d;
    cout << "c | d = " << q << endl;
    // XOR
    int e = 7, f = 4;
    int r = e ^ f;
    cout << "e ^ f = " << r << endl;
    // NOT
    int g = 9;
    int s = ~g , n = !g;
    cout << "~g = " << s << endl;
    cout << "!g = " << n << endl;
    // LEFT SHIFT
    int h = 0b101, i = 3;
    int t = h << i;
    cout << "h << i = " << t << endl;
    // RIGHT SHIFT
    int j = 0b1010000,k = 3;
    int u = j >> k;
    cout << "i >> k = " << u << endl;
}

