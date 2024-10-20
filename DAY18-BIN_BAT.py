# cook your dish here
import math

def total_event_time(T, test_cases):
    results = []
    for case in test_cases:
        N, A, B = case
        rounds = math.log2(N)
        rounds = int(rounds)
        total_time = rounds * A + (rounds - 1) * B
        results.append(total_time)
    return results

# Input reading
T = int(input())  # Number of test cases
test_cases = [tuple(map(int, input().split())) for _ in range(T)]

# Output the results
results = total_event_time(T, test_cases)
for result in results:
    print(result)
