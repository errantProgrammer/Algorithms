/*
Jesus M. Huayhua Flores 
src: 
pdf: 
*/
#include <iostream>
#include <ctime>

void collaztSequence(int n){
    int longestSequence = 1;
    int logestValue = 1;
    for (int i = 2; i < n; i++) {
        int numberOfTerms = 1;
        int currentTerm = i;
        while (currentTerm != 1) {
            if(currentTerm % 2 == 0) {
                currentTerm = currentTerm / 2;
            }else{
                currentTerm = ((3 * currentTerm) + 1);
            }
            numberOfTerms = numberOfTerms + 1;
        }
        if(numberOfTerms > longestSequence){
            std::cout << "Number of terms for " << i << " is " << numberOfTerms << std::endl;
            longestSequence = numberOfTerms;
            logestValue = i;
        }
    }
}
int main(){
    unsigned t0,t1;
    t0 = clock();
    collaztSequence(1000000);
    t1 = clock();
    double time = (double(t1 - t0)/CLOCKS_PER_SEC);
    std::cout << "Execution Time: " << time << std::endl;
    return 0;
}
