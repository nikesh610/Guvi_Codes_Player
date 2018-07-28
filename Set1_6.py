x=input().split()
a=list(set(x[0]))
b=list(set(x[1]))
if(len(a)==len(b)):
	print("yes")
else:
	print("no")
