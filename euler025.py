MAX = 24007
fib = [1]*MAX
for i in xrange(3, MAX):
	fib[i] = fib[i-1]+fib[i-2]


def countDigit(n):
	f = str(n)
	return len(f)


dict= [1]*MAX
for i in xrange(1, MAX):
	dict[i] = countDigit(fib[i])

T = int(raw_input())
for i in xrange(T):
	N = int(raw_input())
	for i in xrange(2, MAX):
		if dict[i] == N:
			print i
			break

