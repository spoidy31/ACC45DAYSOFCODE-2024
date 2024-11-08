# cook your dish here
# Function to calculate minimum flips
def min_flips_to_zero_sum(n, array):
    current_sum = sum(array)
    if current_sum == 0:
        return 0
    if current_sum % 2 != 0:
        return -1
   
    abs_sum = abs(current_sum)
    return abs_sum // 2


t = int(input())
results = []
for _ in range(t):
    n = int(input())
    array = list(map(int, input().split()))
    results.append(min_flips_to_zero_sum(n, array))

# Printing output
for result in results:
    print(result)
