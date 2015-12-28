# def right(n):
# 	res = 0
# 	for b in xrange(2, n/2):
# 		num = int(n*n - 2*n*b)
# 		den = int(2*n - 2*b)
# 		if num%den: continue
# 		a = int(num/den)
# 		c = n-a-b
# 		if c>b and b>a:
# 			#print a,b,c
# 			res += 1
# 	return res

# #print right(12*14)

# # arr = [0]*5000007
# # #arr = [(0,0)]*121
# # for i in xrange(12, 5000007): 
# # 	arr[i] = right(i)
# # 	print i, arr[i]

# #print arr

# best = 0
# for i in xrange(60, 5000007, 60): #60, 5000007, 60
# 	s = right(i)
# 	if s>best:
# 		best = s
# 		print i , s


# T = int(raw_input())
# for tc in xrange(T):
# 	N = int(raw_input())
	
T = int(raw_input())
for tc in xrange(T):
	N = int(raw_input())
	print filter(lambda i:i <= N, [12,60,120,240,420,720,840,1680,2520,4620,5040,9240,18480,27720,55440,110880, 120120, 166320, 180180, 240240, 360360, 720720,1081080,1441440,2042040,2162160,2882880,3603600,4084080])[-1]
