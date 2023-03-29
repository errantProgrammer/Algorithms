// src: https://www.codewars.com/kata/55bf01e5a717a0d57e0000ec/
long long multiply(int n){
  long long mul = 1;
  while(n){
    mul *= n%10;
    n/=10;
  }
  return mul;
}
int persistence(long long n){
  if( n < 10) return 0;
  int cant = 0;
  while( n >= 10){
    n = multiply(n);
    cant++;
  }
  return cant;
}
