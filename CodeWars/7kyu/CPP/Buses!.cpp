// src: https://www.codewars.com/kata/640dee7cbad3aa002e7c7de4
int buses(const int k, const int a, const int p) {
  if (a >= 2 && (double)k / (a / 2) + 2 <= p) return (k + a) % p == 0 ? (k + a) / p : (k + a) / p + 1;
  return 0;
}
