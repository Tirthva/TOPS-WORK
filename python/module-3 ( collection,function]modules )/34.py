# Write a Python script to check if a given key already exists in a dictionary.
d1 = {'a': 1, 'b': 2, 'c': 3}
d2 = 'b'#(d2 is in d1)

if d2 in d1:
    print("key in dict")
else:
    print(" key not in dict")