tc = int(input())
for t in range(tc):
	n = int(input())
	a, b, cell, res = n, n-2, n//2, 0
	while cell>0:
		res+=((cell*a)+(cell*b))
		cell, a, b = cell-1, a-2, b-2
	print(res*2)