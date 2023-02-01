tc = int(input())
for i in range(tc):
	n, m = map(int, input().split())
	res=0
	if n<=2:
		if n!=1:
			res=m
	else:
		res=m*2
	print(res)