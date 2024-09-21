password = input("Enter a password: ")

if len(password) >= 8:
    is_8_plus = True
    for ch in password:
        if ch.isupper():
            is_upper = True

        if ch.islower():
            is_lower = True

        if ch.isdigit():
            is_digit = True

        if not ch.isalnum():
            is_spe_ch = True

if is_upper and is_lower and is_digit and is_spe_ch and is_8_plus:
    print("Valid password")
else:
    print("Invalid password")
