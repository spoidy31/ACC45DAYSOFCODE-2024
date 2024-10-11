def min_operations_to_satisfy_condition(test_cases):
    results = []
    for X, Y in test_cases:
        if X >= 2 * Y or Y >= 2 * X:
            results.append(0)
        else:
            operations_to_double_X = max(0, (2 * Y - X + 1) // 2)
            operations_to_double_Y = max(0, (2 * X - Y + 1) // 2)
            results.append(min(operations_to_double_X, operations_to_double_Y))
    return results

T = int(input())
test_cases = [tuple(map(int, input().split())) for _ in range(T)]
results = min_operations_to_satisfy_condition(test_cases)

# Print results
for result in results:
    print(result)
