/*
Jesus M. Huayhua Flores 
src: 
pdf: 
*/
#include <iostream>
#include <cmath>

int main(){
    int t = 1;
    int a = 1;
    int cnt = 0;
    while(cnt <= 500){
        cnt = 0;
        a++;
        t += a;
        int ttx = sqrt(t);
        for(int i = 1; i <= ttx; i++){
            if(t % i == 0){
                cnt += 2;
            }
        }
        if(t == ttx*ttx){
            cnt--;
        }
    }
    std::cout << t << std::endl;
    return 0;
}
