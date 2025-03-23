num=int(input("Enter the Number"))
k=0
if num<=1:
    print("Non-Prime")
else:
    for i in range(2,(num//2)+1):
        if num%i==0:
            print("Non- Prime")
            k+=1
            break
    if k==0:
        print("Prime")