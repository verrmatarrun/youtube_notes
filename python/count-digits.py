num=int(input("Enter an integer : "))

if num==0:
	print("Number have 1 digit")
else:
	count=0
	if num<0:
		t=num*-1
	else:
		t=num
	while t!=0:
		count+=1
		t//=10
	print(f"{num} have {count} digits")