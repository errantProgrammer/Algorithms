/**
 * Date: 05/10/2024
 * URL: https://codeforces.com/problemset/problem/1097/B
 */

#include <bits/stdc++.h>

int main(){
    int n;
    std::cin >> n; //cantidad de angulos
    std::vector<int> angles(n);
    for (int i = 0; i < n; i++) std::cin >> angles[i];

    for (int mask = 0;mask < (1 << n);mask++){ // recorremos la mascara
        int total = 0;// suma total de los angulos
        for (int i = 0; i < n; i++){ // solo vamos a utilizar los n primeros bits
            if(mask & (1 << i)) // verificamos si el i-esimo bit esta prendido
                total += angles[i];
            else
                total -= angles[i];
        }
        if(total % 360 == 0){
            std::cout << "YES";
            return 0;//se acaba el programa
        }        
    }

    std::cout << "NO";
    
    
    return 0;
}