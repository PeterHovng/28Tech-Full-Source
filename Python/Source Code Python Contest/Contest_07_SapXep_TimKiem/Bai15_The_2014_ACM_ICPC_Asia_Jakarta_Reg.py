def count_groups(n, k, numbers):
    numbers.sort()  # Sắp xếp dãy số
    count_groups = 0  # Đếm số nhóm
    for i in range(n - 1):
        if numbers[i + 1] - numbers[i] > k:
            count_groups += 1
    return count_groups + 1

if __name__ == '__main__':
    n, k = map(int, input().split())
    numbers = list(map(int, input().split()))
    print(count_groups(n, k, numbers))
