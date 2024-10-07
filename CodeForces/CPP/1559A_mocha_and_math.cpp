/**
 * Date: 06/10/2024
 * URL: https://codeforces.com/problemset/problem/1559/A
 */
#include <bits/stdc++.h>

int main(){
    std::ios_base::sync_with_stdio(false);std::cin.tie(0);std::cout.tie(0);
    int cnt;//cantidad de casos
    std::cin >> cnt;
    while(cnt--){
        int n;
        std::cin>>n; //cantidad de datos de entrada
        int result,m;
        std::cin >> result; // guardamos el primer elemento
        for (int i = 1; i < n; i++){
            std::cin >> m;
            result &= m;
        }
        std::cout << result <<  std::endl;
    }
    
    return 0;
}
