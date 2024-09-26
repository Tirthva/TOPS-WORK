# Write a Python program to check multiple keys exists in a dictionary
d1 = {'a': 1, 'b': 2, 'c': 3, 'd': 4, 'e': 5}
d2 = ['a', 'c', 'e', 'f']
key1 = True
for i in d2:
    if i not in d1:
        key1 = False
        break
if key1:
    print("all exist")
else:
    print("no all exist")
