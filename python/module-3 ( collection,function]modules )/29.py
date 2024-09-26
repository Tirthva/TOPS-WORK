# Write a Python program to unzip a list of tuples into individual lists.
list_of_tuples = [(1, 'a'), (2, 'b'), (3, 'c'), (4, 'd')]

list1, list2 = zip(*list_of_tuples)

print("list 1:", list1)
print("list 2:", list2)