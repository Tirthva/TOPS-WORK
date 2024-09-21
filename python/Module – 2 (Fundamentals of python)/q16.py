
# Write a Python program to count the occurrences of each word in a given sentence

# string = ("hello hello")
# print(string.count("hello"))

sentence = "jim jam jim jam chin tapak dam dam"
words = sentence.split()
word_count = {}

for word in words:
    word = word.lower()

    if word in word_count:
        word_count[word] += 1
    else:
        word_count[word] = 1

print("Word Count:")
for word, count in word_count.items():
    print(f"{word}: {count}")