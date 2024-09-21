import datetime

def display_pizza_types():
    print("")
    print("----------------- welcome to tirth's Cafe -----------------")
    print("")
    print("Types of Pizzas")
    print("--------------")
    print("1. cheezy 7")
    print("2. pesto burrata")
    print("3. aglio olio ")
    print("4. pepperoni parmesan")

def display_pizza_sizes():
    print("")
    print("Sizes of Pizzas")
    print("--------------")
    print("1. Small (10 inches)")
    print("2. Medium (14 inches)")
    print("3. Large (18 inches)")

def get_pizza_type():
    while True:
        print("")
        pizza_type = input("Enter pizza type (1, 2, 3, or 4): ")
        if pizza_type in ['1', '2', '3', '4']:
            if pizza_type == '1':
                return "cheezy 7"
            elif pizza_type == '2':
                return "pesto burrata"
            elif pizza_type == '3':
                return "aglio olio"
            else:
                return "pepperoni parmesan"
        else:
            print("Invalid input. Please try again.")

def get_pizza_size():
    while True:
        print("")
        pizza_size = input("Enter pizza size (1, 2, or 3): ")
        if pizza_size in ['1', '2', '3']:
            if pizza_size == '1':
                return "Small (10 inches)", 9.99
            elif pizza_size == '2':
                return 'Medium (14 inches)', 12.99
            else:
                return "Large (18 inches)", 15.99
        else:
            print("Invalid input. Please try again.")

def get_customer_info():
    print("-------------------------------------------------------")
    name = input("Enter your name: ")
    mobile_number = input("Enter your mobile number: ")
    print("-------------------------------------------------------")
    return name, mobile_number

def calculate_total_cost(size_price):
    return size_price

def print_pizza_bill(pizza_type, pizza_size, name, mobile_number, total_cost):
    now = datetime.datetime.now()
    print("")
    print("------------------- Tirth's cafe -------------------")
    print("Pizza Bill")
    print("-----------")
    print(f"Date: {now.strftime('%Y-%m-%d')}")
    print(f"Time: {now.strftime(' %I:%M %p | %A')}")
    print(f"Name: {name}")
    print(f"Mobile Number: {mobile_number}")
    print(f"Pizza Type: {pizza_type}")
    print(f"Pizza Size: {pizza_size}")
    print(f"Total: ${total_cost:.2f}")

def main():
    display_pizza_types()
    pizza_type = get_pizza_type()
    display_pizza_sizes()
    pizza_size, size_price = get_pizza_size()
    name, mobile_number = get_customer_info()
    total_cost = calculate_total_cost(size_price)
    print_pizza_bill(pizza_type, pizza_size, name, mobile_number, total_cost)

main()

