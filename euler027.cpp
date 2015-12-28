#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool is_prime(int n){
	if(n<2) return false;
	for (int i = 2; i*i <= n; ++i)
		if(n%i == 0)
			return false;
		return true;
}

int main(){
	int N;
	scanf("%d", &N);
	int best = -1, besta, bestb;

	for (int b = 0; b <= N; ++b)
	{
		if(!is_prime(b)) continue;
		for(int a = -b; a<=N; ++a)
		{
			for(int n = 0; ; n++)
			{
				int p = n*n + a*n + b;
				if(!is_prime(p))
				{
					if(n>best){
						best = n;
						besta = a;
						bestb = b;
					}
				break; 
				}
			}
		}
	}	
	printf("%d %d\n", besta, bestb);
	return 0;
}
