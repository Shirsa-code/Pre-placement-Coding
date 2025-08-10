#rotate array by one
def rotate_array_by_one(arr):
    if not arr:
        return arr
    return [arr[-1]] + arr[:-1]
