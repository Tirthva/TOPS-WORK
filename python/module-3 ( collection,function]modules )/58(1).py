# Write a Python program to read a random line from a file
import random

def read_random_line(filename):
        with open(filename, 'r') as file:
            lines = file.readlines()
        if not lines:
            print("The file is empty.")
        
        return random.choice(lines).strip()


filename = '58(2).txt'
print({read_random_line(filename)})
