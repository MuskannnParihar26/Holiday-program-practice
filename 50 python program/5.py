print("Muskan")
n=int(input("Enter number: "))
flag=True
for i in range(2,n):
    if n%i==0:
        flag=False
        break
if flag:
    print("Prime")
else:
    print("Not Prime")

