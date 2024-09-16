if __name__ == '__main__':
    students=[]
    for _ in range(int(input())):
        name=input()
        score=float(input())
        students.append([name,score])
    scr=[ x[1] for x in students]
    min_std = sorted(set(scr))
    stud=sorted( [ y[0]  for y in students if y[1] == min_std[1]] )
    [print(k) for k in stud]
