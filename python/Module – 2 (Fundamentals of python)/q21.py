# Write a Python function to reverses a string if its length is a multiple of 4.
s = input("Enter a string: ")

def reverse_str(s):
    if len(s) % 4 == 0:
        return s[::-1]
    else:
        return s

print("Reverse string:", reverse_str(s))