# Write a Python program to combine values in python list of dictionaries.
# Sample data: [{'item': 'item1', 'amount': 400}, {'item': 'item2', 'amount':300}, o {'item': 'item1', 'amount': 750}]
# Expected Output:
# Counter ({'item1': 1150, 'item2': 300})

data = [
    {'item': 'item1', 'amount': 400},
    {'item': 'item2', 'amount': 300},
    {'item': 'item1', 'amount': 750}]
def combo(d1list):
    combo2 = {}
    for i in d1list:
        item = i['item']
        amount = i['amount']
        if item in combo2:
            combo2[item] += amount
        else:
            combo2[item] = amount

    return combo2
output = combo(data)
print("addition of that is:",output)
