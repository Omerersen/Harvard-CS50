n  = int(input("Height: "))
i = 0
for k in reversed(range(1, n+1, 1)):
    if(n < 10):
        print(k*" ", end="")
        i += 1
        print(i*"#", end=" ")
        print(i*"#")


