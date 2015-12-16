#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	int T;
	scanf("%d", &T);
	while(T--){
		int N;
		scanf("%d", &N);

		long long result = -1;
		for(int c = 0; c <= N/2; ++c){
			for (int b = (N-c)/2; b < N-c && b < c; ++b){
			int a = N-b-c;
			if(a > b) continue;
			if(a*a + b*b == c*c)
				result = max(result, (long long)a*b*c);
			}
		}

		printf("%lld\n", result);
	}
	return 0;
}
