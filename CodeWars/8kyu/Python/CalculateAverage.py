"""
src: https://www.codewars.com/kata/57a2013acf1fa5bfc4000921/
"""
def find_average(numbers):
    if len(numbers) == 0:
        return 0
    return sum(numbers) / len(numbers)