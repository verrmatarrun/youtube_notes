def display(n):
	if n==0:
		return
	print(n)
	display(n-1)
	print(n)

display(5)