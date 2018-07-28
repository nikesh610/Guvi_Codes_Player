x=list(input())
even=[]
odd=[]
cnt=0
for i in range(len(x)-1,-1,-1):
	if(cnt%2==0):
		odd.append(x[i])
		cnt+=1
	else:
		even.append(x[i])
		cnt+=1
for i in range(len(x)):
	if(i%2==0):
		print(odd.pop(),end="")
	else:
		print(even.pop(),end="")
