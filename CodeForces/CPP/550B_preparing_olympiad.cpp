/**
 * Date: 06/10/2024
 * URL: https://codeforces.com/problemset/problem/550/B
 */

#include <bits/stdc++.h>

int GetBit(int n, int i){
    return ((n>>i) & 1);
}

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    /**
     * n = cantidad de problemas
     * l = dificultad minima
     * r = dificultad maxima
     * x = diferencia maxima entre el problema más dificil y el más facil.
     */
    int n, l, r, x;
    std::cin >> n >> l >> r >> x;
    std::vector<int> problems(n); // dificultad de los problemas
    for (int i = 0; i < n; i++) std::cin >> problems[i];
    int result=0;
    for (int mask = 0; mask < (1 << n); mask++){
        if(__builtin_popcount(mask) == 1) continue; // no nos sirve esta combinacion
        int min = INT_MAX, max =INT_MIN,sum = 0;
        for (int bit = 0; bit < n; bit++){//evaluamos bit a bit
            if( GetBit(mask,bit) ){ // el bit esta prendido
                max = problems[bit] > max ? problems[bit] : max;
                min = problems[bit] < min ? problems[bit] : min;
                sum += problems[bit];
            }
        }
        if(l <= sum and sum <= r and max - min >= x) result++;
    }
    std::cout << result << std::endl;    
    return 0;
}
