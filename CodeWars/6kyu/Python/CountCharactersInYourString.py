# src: https://www.codewars.com/kata/52efefcbcdf57161d4000091
def count(s):
    if not bool(s):
        return {}
    dictionary = dict()
    for c in s:
        if c in dictionary:
            dictionary.update({c : dictionary[c] + 1})
        else:
            dictionary[c] = 1
    return dictionary