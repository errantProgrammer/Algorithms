if __name__ == '__main__':
    n = int(input())
    arr = map(int,input().split)
    # Remove the duplicate number
    arr = list(set(arr))
    arr.sort()
    print(arr[-2])
    # Other form
    # print(arr[leng(arr) - 2]




