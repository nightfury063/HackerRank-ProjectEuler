fact = [1]*15
for i in xrange(1, 15):
	fact[i] = fact[i-1] * i

def lexico(alpha, N):
	if not alpha: return ''
	n = len(alpha)
	index = 0
	while fact[n-1] <= N:
		N -= fact[n-1]
		index += 1
	return alpha[index] + lexico(alpha[:index]+alpha[index+1:], N);


T = int(raw_input())
for i in xrange(T):
	N = int(raw_input())
	print lexico(list('abcdefghijklm'), N-1);

# T = int(raw_input())
# for i in xrange(T):
# 	N = int(raw_input())
# 	print lexico(list('0123456789'), N-1);