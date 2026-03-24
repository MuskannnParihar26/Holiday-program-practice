try:
    a=int(input("enter the number one:"))
    b=int(input("enter the number two:"))
    print(a/b)
except ZeroDivisionError:
        print("dont write zero")