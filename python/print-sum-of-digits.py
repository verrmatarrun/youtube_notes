t=num=int(input("Enter an integer : "))
sum_of_digits=0

if num<0:
	num=num*-1

while num!=0:
	digit=num%10
	sum_of_digits+=digit
	num//=10

if t<0:
	print(f"Sum of digits of {t} is {sum_of_digits*-1}")
else:
	print(f"Sum of digits of {t} is {sum_of_digits}")
