def custom_sort(array):
    factor = 10 

    def comparator(x):
        return x % factor

    return sorted(array, key=comparator)

numbers = [64, 34, 25, 12, 22, 11, 90]
print(custom_sort(numbers))

