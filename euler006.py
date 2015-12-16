T = int(input())
for i in range(T):
	N = int(input())

	SquareOfSum, SumOfSquare = 0, 0

	SquareOfSum = (N*(N+1)/2) * (N*(N+1)/2)
	SumOfSquare = (N*(N+1)*(2*N+1))/6

	print(SquareOfSum- SumOfSquare)