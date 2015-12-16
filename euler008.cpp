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
	scanf("%d\n", &T);
	while(T--){
		int N, K;
		scanf("%d %d\n", &N, &K);

		string num;
		cin >> num;
		int result = 0;
		for (int i = 0; i < N-K+1; ++i)
		{
			int m=1;
			for (int j = 0; j < K; ++j)
			{
				m *= num.at(i+j) - '0';
			}
			if(m > result){ 
				result = m;
			}
		}
		printf("%d\n", result);
	}
	return 0;
}
