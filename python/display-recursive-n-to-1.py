
def display(n):
	if (n==0):#base case
		return
	
	display(n-1)
	print(n)

display(5)