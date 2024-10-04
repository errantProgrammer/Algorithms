#include <bits/stdc++.h>
using namespace std;

int main(){
    // AND
    int a = 7, b = 4;
    int p = a & b;
    cout <<"a & b = " << p << endl; // p = 4
    // OR
    int c = 7, d = 4;
    int q = c | d;
    cout << "c | d = " << q << endl; // q = 7
    // XOR
    int e = 7, f = 4;
    int r = e ^ f;
    cout << "e ^ f = " << r << endl; // r = 3
    // NOT
    int g = 9;
    int s = ~g , n = !g;
    cout << "~g = " << s << endl; // s = -10
    cout << "!g = " << n << endl; // s = -10
    // LEFT SHIFT
    int h = 7;
    int t = ~g;
    cout << "~g = " << s << endl; // t = 7
    // RIGHT SHIFT
    int i = 7;
    int u = ~g;
    cout << "~g = " << s << endl; // u = 7
}

