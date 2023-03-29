// src: https://www.codewars.com/kata/576757b1df89ecf5bd00073b/
def tower_builder(n_floors):
    # Caso base
    if n_floors == 0:
        return ""
    tam = 2*n_floors - 1
    blank_space = tam // 2
    solution = []
    for i in range(1,n_floors + 1):
        sol = ""
        sol = sol + (" " * blank_space)
        sol = sol + ("*" * (2 * i - 1))
        sol = sol + (" " * blank_space)
        blank_space = blank_space - 1
        solution.insert(i - 1, sol)
    return solution
    