def sumOfPower(N):
    x = 0
    while N!=0:
        x += N%10
        N = N/10
    return x

T = int(raw_input())
for i in xrange(T):
    N = int(raw_input())
    
    two = 2**N
    
    print sumOfPower(two)
    