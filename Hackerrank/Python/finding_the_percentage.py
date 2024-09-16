if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    query_name = input()
    notes = [k for k in student_marks[query_name]]
    promedio = sum(notes)/len(notes)
    print(f'{promedio:.2f}')
