def get_string_from_user():
    user_string = input("Please enter a string: ")
    return user_string

def count_lower(user_string):
    count = 0
    for char in user_string:
        if char.islower():
            count += 1
    return count

def count_upper(user_string):
    count = 0
    for char in user_string:
        if char.isupper():
            count += 1
    return count

def count_special_symbols(user_string):
    count = 0
    for char in user_string:
        if not char.isalnum():
            count += 1
    return count

def count_digits(user_string):
    count = 0
    for char in user_string:
        if char.isdigit():
            count += 1
    return count

def count_vowels(user_string):
    count = 0
    vowels = 'aeiouAEIOU'
    for char in user_string:
        if char in vowels:
            count += 1
    return count

def count_consonants(user_string):
    count = 0
    vowels = 'aeiouAEIOU'
    for char in user_string:
        if char.isalpha() and char not in vowels:
            count += 1
    return count

def main():
    
    user_string = get_string_from_user()
    print("Select a function:")
    print("1. Count lowercase letters")
    print("2. Count uppercase letters")
    print("3. Count special symbols")
    print("4. Count digits")
    print("5. Count vowels")
    print("6. Count consonants")
    print("7. Quit")

    while True:
        choice = input("Enter your choice (1-7): ")
        if choice == "7":
            break

        if choice == "1":
            print("Number of lowercase letters: ", count_lower(user_string))
        elif choice == "2":
            print("Number of uppercase letters: ", count_upper(user_string))
        elif choice == "3":
            print("Number of special symbols: ", count_special_symbols(user_string))
        elif choice == "4":
            print("Number of digits: ", count_digits(user_string))
        elif choice == "5":
            print("Number of vowels: ", count_vowels(user_string))
        elif choice == "6":
            print("Number of consonants: ", count_consonants(user_string))
        else:
            print("Invalid choice. Please try again.")


main()