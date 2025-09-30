rows = int(input("How many rows you want: "))
columns = int(input("How many columns you want: "))
symbols = input("Which symbol you want: ")
repeat = int(input("How much you want them: "))
spaces = int(input("How much you want spaces: "))

for i in range(columns):
    for j in range(rows):
        print(symbols, end="")
    print(spaces*" " , end="")
    for k in range(repeat - 1):
        for l in range(rows):
            print(symbols, end="")
        print(spaces*" " , end="")
    print()
