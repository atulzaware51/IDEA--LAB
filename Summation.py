num = int(input("How many numbers do you want to sum? "))
total = 0
for i in range(num):
    total += int(input(f"Enter number {i+1}: "))
print(f"The sum is: {total}")
