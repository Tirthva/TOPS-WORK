# Write a Python program to remove an empty tuple(s) from a list of tuples.
list1 = [(1, 2),(),(4, 5),(6, 7),()]
newlist=[]
for t in list1:
    if t:
        newlist.append(t)
        print(list1)
        print(newlist)