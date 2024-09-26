# Write a Python program to find the repeated items of a tuple.
list1 = [1, 2, 1, 2, 3, 4]
unique_list = []
duplicat = []
for i in list1:
    if i not in unique_list:
        unique_list.append(i)
    elif i not in duplicat:
        duplicat.append(i)
print(duplicat)