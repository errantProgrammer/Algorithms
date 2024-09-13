if __name__ == '__main__':
    N = int(input())
    list = []
    for i in range(N):
        mensaje = input().split()

        if mensaje[0] == 'insert':
            list.insert(int(mensaje[1]),int(mensaje[2]))
        elif mensaje[0] == 'print':
            print(list)
        elif mensaje[0] == 'remove':
            list.remove(int(mensaje[1]))
        elif mensaje[0] == 'append':
            list.append(int(mensaje[1]))
        elif mensaje[0] == 'sort':
            list.sort()
        elif mensaje[0] == 'pop':
            list.pop()
        elif mensaje[0] == 'reverse':
            list.reverse()
