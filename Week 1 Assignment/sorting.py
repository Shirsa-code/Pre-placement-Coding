#check for sorting
def is_sorted_ascending(lst):
    return all(lst[i] <= lst[i + 1] for i in range(len(lst) - 1))

def is_sorted_descending(lst):
    return all(lst[i] >= lst[i + 1] for i in range(len(lst) - 1))
