T = int(input())  # Number of test cases
for _ in range(T):
    N, X, Y = map(int, input().split())  # Number of problems, marks per problem, target score
    if Y % X == 0 and Y // X <= N:
        print("YES")
    else:
        print("NO")
