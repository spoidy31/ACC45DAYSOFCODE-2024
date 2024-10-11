def max_tastiness(test_cases):
    results = []
    for case in test_cases:
        a, b, c, d = case
        max_taste = max(a + c, a + d, b + c, b + d)
        results.append(max_taste)
    return results
T = int(input())
test_cases = [list(map(int, input().split())) for _ in range(T)]

# Get results
results = max_tastiness(test_cases)


for result in results:
    print(result)
