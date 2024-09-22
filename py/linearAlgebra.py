import numpy

def p26ex16_3(n):
    A = [[0 for i in range(n)] for j in range(n)]
    for i in range(n):
        for j in range(n):
            if i == j :
                A[i][j] = i + 1
            else:
                A[i][j] = 3
    for i in range(n):
        for j in range(n):
            print(A[i][j], end = ' ')
        print()
    return numpy.linalg.det(A)

# for i in range(5):
#     print(p26ex16_3(i + 1))

A = [
    [1, 1, 1, 2],
    [1, 1, -2, 0], 
    [1, 2, 0, -1],
    [1, 1, 1, 1]
]

print(numpy.linalg.det(A))