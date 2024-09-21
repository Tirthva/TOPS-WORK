import random
import datetime

stations = ["Motavarachha", "katargam", "yogi chowk", "vesu", "Adajan"]
num = [0, 5, 10, 15, 20]
ticket_number = random.randint(100000, 999999)
now = datetime.datetime.now()
date = now.strftime('%Y-%m-%d') 
time = now.strftime(' %I:%M %p | %A')

print("Available Stations:")
for i in range(len(stations)):
    print(f"{i + 1}: {stations[i]}")

start = int(input("Choose starting station (enter the number): ")) - 1

end = int(input("Choose ending station (enter the number): ")) - 1

if start > end:
    total_price = num[start] - num[end]
else:
    total_price = num[end] - num[start]

print("\nBus Ticket")
print("==========")
print("")
print(f"Ticket Number: {ticket_number }")
print(f"From         : {stations[start]}")
print(f"To           : {stations[end]}")
print(f"Date         : {date}")
print(f"Time         :{time}")
print(f"Total price  : Rs.{total_price}")
print("==========")
print("")

