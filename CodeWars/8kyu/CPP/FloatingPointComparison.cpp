// src: https://www.codewars.com/kata/5f9f43328a6bff002fa29eb8
#include <math>

using namespace std;

bool approx_equals(double a,double b){
    return fabs(a - b)  < 0.001;
}
