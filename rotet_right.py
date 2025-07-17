def rotate_right(arr, k):
    n = len(arr)
    k = k % n  # Handle if k > n
    return arr[-k:] + arr[:-k]
arr = [1, 2, 3, 4, 5, 6, 7]
k = 3
print("Right Rotated:", rotate_right(arr, k))

