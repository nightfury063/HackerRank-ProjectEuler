import math
def sumDiv(n):
	sum = 1
	i = 2
	while i*i < n:
		if n % i == 0:
			sum += i + n/i
		i += 1
	if(i*i == n):
		sum += i
	
	return sum


Max = 100007
is_amicable = [-1]*Max


is_amicable[0] = 0
for i in xrange(1, Max):
	if is_amicable[i] != -1:
		continue
	j = sumDiv(i)
	if(i!=j and sumDiv(j) == i):
		is_amicable[i] = is_amicable[j] = 1
	else:
		is_amicable[i] = 0


for i in xrange(1, Max):
	is_amicable[i] = is_amicable[i-1] + (i if is_amicable[i]==1 else 0)


T = int(raw_input())
for tc in xrange(T):
	N = int(raw_input())
	print sumDiv(N)
	print is_amicable[N]