def is_easy_to_pronounce(s):
    vowels = {'a', 'e', 'i', 'o', 'u'}
    max_consecutive_consonants = 0
    current_consecutive_consonants = 0
    
    for char in s:
        if char in vowels:
            current_consecutive_consonants = 0
        else:
            current_consecutive_consonants += 1
            if current_consecutive_consonants >= 4:
                return "NO"
    
    return "YES"

def main():
    t = int(input())
    results = []
    
    for _ in range(t):
        n = int(input())
        s = input().strip()
        results.append(is_easy_to_pronounce(s))
    
    for result in results:
        print(result)

if __name__ == "__main__":
    main()
