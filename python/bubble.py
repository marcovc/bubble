from random import shuffle

def bubble_sort(lst):
    swapped = True
    while swapped:
        swapped = False
        for j in range(len(lst) - 1):
            if lst[j] > lst[j + 1]:
                lst[j], lst[j + 1] = lst[j + 1], lst[j]
                swapped = True
    return lst

def is_sorted(lst):
    for i in range(len(lst) - 1):
        if lst[i] > lst[i + 1]:
            return False
    return True


size_list = 10000
nr_runs = 100

lst = list(range(size_list))
for i in range(nr_runs):
    shuffle(lst)
    lst = bubble_sort(lst)
    assert is_sorted(lst)
