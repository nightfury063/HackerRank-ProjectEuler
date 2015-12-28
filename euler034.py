#precompute all factorials
MAX = 10
fact = [1]*MAX
for i in xrange(1, MAX):
	fact[i] = i*fact[i-1];

#print fact

def digiFactSum(n):
	res = 0
	while n>0:
		res += fact[n%10]
		n = n/10
	return res

N = int(raw_input())
sum = 0
for i in xrange(10, N+1):
	if digiFactSum(i) % i == 0:
		#print i
		sum += i

print sum