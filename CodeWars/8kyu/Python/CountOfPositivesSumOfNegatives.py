# src: https://www.codewars.com/kata/576bb71bbbcf0951d5000044/
def count_positives_sum_negatives(arr):
    if len(arr) == 0:
        return []
    cant_positive = 0
    sum = 0
    for i in arr:
        if i < 0:
            sum += i
        elif i > 0:
            cant_positive += 1
    return [cant_positive,sum]