# Write a Python script to concatenate following dictionaries to create a new one.
# Define the dictionaries
d1 = {'a': 1, 'b': 2, 'c': 3}
d2 = {'d': 4, 'e': 5, 'f': 6}
d3 = {'g': 7, 'h': 8, 'i': 9}

new_d = dict(list(d1.items()) + list(d2.items()) + list(d3.items()))
print(new_d)