# Mi solución
def swap_case(s):
    new_str = ""
    for i in s:
        if i >= 'a' and i <= 'z':
            new_str += i.upper()
        elif i >= 'A' and i <= 'Z':
            new_str += i.lower()
        else:
            new_str += i
    return new_str

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)
