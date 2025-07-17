def move_zeros(arr):
    non_zero = [x for x in arr if x != 0]
    return non_zero + [0] * (len(arr) - len(non_zero))
arr = [0, 1, 0, 3, 12,40,90,0,34,0]
print("After moving zeros:", move_zeros(arr))
