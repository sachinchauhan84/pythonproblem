year=int(input("Enter the Year"))
if year % 100==0:
    if year%400==0:
        print("Leap Year")
    else:
        print("Not Leap Year")
elif year%4==0:
    print("Leap Year")
else:
    print("Not Leap Year")