# Write a Python script to sort (ascending and descending) a dictionary by
# value.

dict1 = {'c': 3,'a': 1,'d': 4,'b': 2}
sort1 = sorted([(value, key)for (key, value) in dict1.items()])
print("sort dictionary:")
print(sort1)