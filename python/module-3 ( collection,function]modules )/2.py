# How will you remove last object from a list?
# Suppose list1 is [2, 33, 222, 14, and 25], what is list1 [-1]?

# using pop method
list1 = [2, 33, 222, 14, 25]
list1.pop()
print(list1)  
# ans: [2, 33, 222, 14]

#using index
list1 = list1[:-1]
print(list1)

#list[-1]
list1 = [2, 33, 222, 14, 25]
print(list1[-1])