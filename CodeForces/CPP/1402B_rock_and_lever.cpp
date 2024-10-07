/**
 * Date: 06/10/2024
 * URL: https://codeforces.com/problemset/problem/1420/B
 */

#include <bits/stdc++.h>
#define Long long long int

void solve(void){
    int n;
    std::cin >> n;
    std::vector<Long> values(n);
    for (int i = 0; i < n; i++) std::cin >> values[i];// guardamos los valores
    //recorremos todos los bits, como nuestro numero maximo es 1e9 se requiere 30 bits
    // para su representacion
    Long ans = 0;
    for (int bit = 29; bit >= 0; bit--){ 
        Long cnt = 0;
        for (int i = 0; i < n; i++){
            // verificamos que el primer i-esimo bit este prendido
            // y que el i-esimo bit + 1 este apagado
            if(values[i] >= (1<<bit) && values[i] < (1 << (bit + 1)) ){
                cnt++;
            }
        }
        ans += cnt * (cnt - 1)/2;
    }
    std::cout << ans << std::endl;
}


int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int t;
    std::cin >> t;
    while(t--) solve();
    return 0;
}
