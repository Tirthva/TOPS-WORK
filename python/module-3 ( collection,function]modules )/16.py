# Write a Python program to check whether a list contains a sub list
list1 = [1, 2, 3, 4, 5, 6]
sub_list = [3, 4, 5]

list1_str = ''.join(map(str, list1))
sub_list_str = ''.join(map(str, sub_list))

if sub_list_str in list1_str:
    print("list in sub list", sub_list)
else:
    print("not in sub list", sub_list)