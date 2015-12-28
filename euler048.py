# MAX = 1000;

# arr = [1]*(MAX+1)

# for i in xrange(1, MAX+1):
# 	arr[i] = i**i

# print sum(arr)-1
arr = [0]*2000007

MOD = 10000000000

N = int(raw_input())

#sum = 0

for i in xrange(1, N+1):
	arr[i] = (arr[i-1] + i**i) % MOD
	#sum += (i**i) % MOD

#print sum % MOD
print arr[N]
