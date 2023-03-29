"""
src: https://www.codewars.com/kata/55f2b110f61eb01779000053/
"""
def get_sum(a,b):
    if a == b: return a
    sum = 0
    _min = min(a,b)
    _max = max(a,b)
    for i in range(_min,_max + 1):
        sum += i
    return sum