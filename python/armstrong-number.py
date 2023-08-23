t=num=int(input("Enter an integer : "))

sum_of_digits=0

while num!=0:
	digit=num%10
	sum_of_digits+=digit**3
	num//=10

if sum_of_digits==t:
	print(t,"is an armstrong number")
else:
	print(t,"is not an armstrong number")

