# Input the number of test cases
T = int(input())

# Loop through each test case
for _ in range(T):
    # Read the four referee decisions
    R = list(map(int, input().split()))
    
    # Check if all referees consider the ball to be inside (all values should be 0)
    if all(r == 0 for r in R):
        print("IN")
    else:
        print("OUT")
