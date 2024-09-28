def has_qualified(points):
    if points >= 12:
        return "Yes"
    else:
        return "No"

# Read input
X = int(input().strip())

# Determine if the team has qualified
result = has_qualified(X)

# Print the result
print(result)

