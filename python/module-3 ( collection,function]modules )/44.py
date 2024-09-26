# Write a Python program to create and display all combination of letters,
# selecting each letter from a different key in a dictionary.
# Sample data: {'1': ['a','b'], '2': ['c','d']}
# Expected Output:
# ac ad bc bd
data = {'1': ['a', 'b'], '2': ['c', 'd']}
def cross_pair(data):
    list1 = list(data.values())
    pair = []
    for l1 in list1[0]:
        for l2 in list1[1]:
            pair.append(l1 + l2)

    return pair
combo = cross_pair(data)
print(combo)