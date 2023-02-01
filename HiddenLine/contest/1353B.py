tc = int(input())
for i in range(tc):
	n, k = map(int, input().split())
	a = sorted(list(map(int, input().split())))
	b = sorted(list(map(int, input().split())))
	b.reverse()
	for j in range(k):
		if a[j]<b[j]:
			a[j] = b[j]
	print(sum(a))