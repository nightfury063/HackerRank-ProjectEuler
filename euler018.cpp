#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int T;
    scanf("%d", &T);
    while(T--){
    	int N;
    	scanf("%d", &N);
    	int arr[N][N];
    	//initialize
    	for (int i = 0; i < N; ++i)
    	{
    		for (int j = 0; j < N; j++)
    		{
    			arr[i][j] = 0;
    		}
    	}
    	//input array
    	for (int i = 0; i < N; ++i)
    	{
    		for (int j = 0; j < i+1; j++)
    		{
    			cin>>arr[i][j];
    		}
    	}

    	
    	for (int i = 0; i < N; ++i)
    	{
    		for (int j = 0; j <=i; ++j)
    		{
    			int path_left;
    			if(j == 0) path_left = 0;
    			else path_left = arr[i-1][j-1];

    			int path_right;
    			if(j==i) path_right = 0;
    			else path_right = arr[i-1][j];

    			arr[i][j] += max(path_left, path_right);
     		}
    	}

    	int sum = 0;
    	for (int i = 0; i < N; ++i)
    	{
    		sum = max(sum, arr[N-1][i]);
    	}
    	printf("%d\n", sum);
    }
    return 0;
}

