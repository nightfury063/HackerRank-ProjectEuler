#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;

// const int MAX = 501;
// int values[MAX][MAX];

int MOD = 1000000007;
int comb[1001][1001];


int main(){ 
	comb[0][0] = 1;

	for (int i = 1; i < 1001; ++i)
	{
		comb[i][0] = 1;
		for (int j = 1; j <=i ; ++j)
		{
			comb[i][j] = (comb[i-1][j-1]+ comb[i-1][j]) % MOD;
		}
	}

	int T;
	scanf("%d", &T);
	while(T--){
		int N, M;
		scanf("%d %d", &N, &M);
		printf("%d\n", comb[N+M][N]);

	}	
	return 0;
}