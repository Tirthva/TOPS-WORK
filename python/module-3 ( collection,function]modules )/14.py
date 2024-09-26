# Write a Python program to find the second smallest number in a list.
my_list=[1,22,3,3,45,74,85,32]
set_list = set(my_list) #set to list
list_set = list(set_list) #list to set
list_set.sort()
print(list_set[1])
