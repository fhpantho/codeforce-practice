def solve_eric_problem(test_cases):
    results = []
    for n, ranges in test_cases:
        # Create events to assign values
        ranges = sorted((l, r, i) for i, (l, r) in enumerate(ranges))
        assigned = set()
        result = [0] * n
        
        for l, r, idx in ranges:
            # Find the first unused value in the range [l, r]
            for v in range(l, r + 1):
                if v not in assigned:
                    assigned.add(v)
                    result[idx] = 1
                    break
        
        results.append("".join(map(str, result)))
    return results

# Input Reading
def read_input():
    import sys
    input = sys.stdin.read
    data = input().split()
    
    t = int(data[0])
    test_cases = []
    idx = 1
    for _ in range(t):
        n = int(data[idx])
        idx += 1
        ranges = []
        for __ in range(n):
            l, r = map(int, data[idx:idx+2])
            idx += 2
            ranges.append((l, r))
        test_cases.append((n, ranges))
    return test_cases

# Output the results
if __name__ == "__main__":
    test_cases = read_input()
    results = solve_eric_problem(test_cases)
    sys.stdout.write("\n".join(results) + "\n")
