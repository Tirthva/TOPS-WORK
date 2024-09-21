import random
def guessing_game():
    while True:
        winning_number = random.randint(0, 100)
        attempts = 0
        print("Welcome to the Guessing Game!")
        print("I have selected a number between 0 and 100. Try to guess it.")

        while True:
            guess = int(input("Enter your guess: "))
            attempts += 1

            if guess < winning_number:
                print("Too low!")
            elif guess > winning_number:
                print("Too high!")
            else:
                print(f"Congratulations! You've guessed the number {winning_number} correctly.")
                print(f"It took you {attempts} attempts.")
                break

        play_again = input("Do you want to play again? (yes/no): ")
        if play_again != 'yes':
            print("Thank you for playing! Goodbye.")
            break

guessing_game()


# import random
# def guess_game():
#     while True:
#         winning_num = random.randint(0,100)
#         attempts = 0
#         print("welcome to guessing game")
#         print("enter digits in between 0 to 100")
#         while True:
#             guess = int(input("enter number : "))
#             attempts += 1

#             if guess < winning_num:
#                 print("too low")
                
#             elif guess > winning_num:
#                 print("too high")
#             else:
#                 print(f"congratulation you guess right {winning_num}")
#                 print(f"your attempts is {attempts}")
#                 break
#         play_again= input("do you want to play again yes/no:  ")
#         if play_again != 'yes':
#                 print("thank you")
#                 break
# guess_game()
