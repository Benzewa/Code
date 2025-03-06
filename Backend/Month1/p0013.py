# for int i int range(start, max, step)
for i in range(0, 10 + 1, 2):
    print("Hello", i, i * ".")
i = 0
for x in range(0, 5, 1):
    for y in range(0, 5, 1):
        print(f"({i:02})", end = " ") # to prevent the newline of the print function
        i += 1
    print("")