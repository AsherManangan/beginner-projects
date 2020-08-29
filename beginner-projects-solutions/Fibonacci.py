upto = int(input("How many terms? "))
first = 0
second = 1
i = 2
print(f"Fibonacci Sequence up to {upto}th term: ")
print(first)
print(second)

while (i<=upto):
    fib = first + second
    print(fib)
    first = second
    second = fib
    i = i+1
