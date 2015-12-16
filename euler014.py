#this solution produces runtime error
def max(a, b):
	if a>b:
		return a
	else:
		return b

def chain(n):
	count = 0
	while n>1:
		count+=1
		if n%2 == 0:
			n /= 2	
		else:
			n = 3*n+1
	return count

T = int(raw_input())
for i in xrange(T):
	N = int(raw_input())

	max = [0, 0]
	i = 0
	for i in range(N):
		c = chain(i)
		if c > max[0]:
			max[0] = c
			max[1] = i

	print "%s" % (max[1])

