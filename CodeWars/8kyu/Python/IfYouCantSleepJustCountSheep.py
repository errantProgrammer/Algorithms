"""
src: https://www.codewars.com/kata/5b077ebdaf15be5c7f000077/
"""
def count_sheep(n):
    if n == 0: return ""
    sol = ""
    for i in range(1,n+1):
        sol =sol + str(i) + " sheep..."
    return sol