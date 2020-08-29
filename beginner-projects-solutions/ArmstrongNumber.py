number = int (input ("Enter a number: "))
tempNumber = number
sum = 0
while (number > 0):
    mod = int(number % 10)
    sum = int(sum + (mod*mod*mod))
    number = int(number / 10)
print (sum)
if (tempNumber == sum):
    print(f"{tempNumber} is an Armstrong Number")
else : 
    print(f"{tempNumber} is not an Armstrong Number")
