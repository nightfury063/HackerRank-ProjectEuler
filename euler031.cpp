#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;

const int MOD = 1000000000+7;

int main() {

	static int coins[] = {1, 2, 5, 10, 20, 50, 100, 200};

	static int dp[100007];

	//no coins
	dp[0] = 1;
	for(int i =1; i<sizeof(dp)/sizeof(dp[0]); i++){
		dp[i] = 0;
	}

	for(int i =0; i<sizeof(coins)/sizeof(coins[0]); i++ ){
		int coin = coins[i];//new coin
		//now we have to recalculate array dpx, so that dp[v] = 
		// #(number of ways to pay price v with new coin in the system)
		for(int v = coin; v<sizeof(dp)/sizeof(dp[0]); v++){
			dp[v] = (dp[v]+dp[v-coin]) % MOD;
			//start v from coin so that v-coin > 0
			//paying with new coin or without new coin
		}

	}

    int T;
    scanf("%d", &T);
    while(T--){
    	int N;
    	scanf("%d", &N);

    	printf("%d\n", dp[N]);
    }
    return 0;
}

