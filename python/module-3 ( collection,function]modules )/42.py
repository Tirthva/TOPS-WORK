# Write a Python program to print all unique values in a dictionary.

d = {'a': 1, 'b': 2, 'c': 3, 'd': 2, 'a': 1}
list1 = dict(d)
new_list = set(list1)
print(new_list)

