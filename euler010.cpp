#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;
const int MAX = 1000007;
long long sum[MAX];
int main(int argc, char const *argv[])
{

	for(int i = 2; i <= MAX; i++){
		if(!sum[i]){
			for (int j = i+i; j < MAX; j+=i)
			{
				sum[j] = 1;
			}
		}
	}
	for (int i = 2; i < MAX; ++i)
	{
		sum[i] = sum[i-1] + (sum[i] ? 0: i);
	}

	int T;
	scanf("%d", &T);
	while(T--){
		int N;
		scanf("%d", &N);
		printf("%lld\n", sum[N]);
	}
	return 0;
}

