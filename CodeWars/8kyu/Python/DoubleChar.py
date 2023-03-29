"""
src: https://www.codewars.com/kata/56b1f01c247c01db92000076/
"""
def double_char(s):
    sol=""
    for c in s:
        sol = sol + c + c
    return sol