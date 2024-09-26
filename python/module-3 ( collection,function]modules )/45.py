# Write a Python program to find the highest 3 values in a dictionary
d = {'a': 1, 'b': 2, 'c': 33, 'd': 14, 'e': 500, 'f': 10}
values = list(d.values())
values.sort(reverse=True)
print(values[:3])