# src: https://www.codewars.com/kata/5208f99aee097e6552000148/
def solution(s):
    if not bool(s):
        return ""
    i = 0
    while i < len(s):
        if s[i] >= 'A' and s[i] <= 'Z':
            s = s[:i] + ' ' + s[i:]
            i = i + 1
            # s.insert(i,' ')
        i = i + 1
    return s