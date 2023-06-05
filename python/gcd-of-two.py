a=int(input("Enter first  integer : "))
b=int(input("Enter second integer : "))

while a%b!=0:
	rem=a%b
	a=b
	b=rem

print("GCD is ",rem)

