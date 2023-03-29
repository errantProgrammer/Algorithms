// src: https://www.codewars.com/kata/570409d3d80ec699af001bf9
int fusc(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    int Fusc[n + 1];
    Fusc[0] = 0;
    Fusc[1] = 1;
    for(int i = 2; i <= n; i++){
        if(i % 2 == 0){
            Fusc[i] = Fusc[i / 2];
        }else{
           Fusc[i] = Fusc[(i - 1) / 2] + Fusc[((i - 1) / 2) + 1];      
        }
    }
    return Fusc[n];
}
