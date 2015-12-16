#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;

const int N=20;

int a[N+10][N+10];

int main()
{
	int ans=0;
	for(int i=3;i<N+3;++i)
		for(int j=3;j<N+3;++j)
			cin>>a[i][j];
	for(int i=3;i<N+3;++i)
		for(int j=3;j<N+3;++j)
		{
			ans=max(ans,a[i][j]*a[i+1][j]*a[i+2][j]*a[i+3][j]);
			ans=max(ans,a[i][j]*a[i][j+1]*a[i][j+2]*a[i][j+3]);
			ans=max(ans,a[i][j]*a[i+1][j+1]*a[i+2][j+2]*a[i+3][j+3]);
			ans=max(ans,a[i][j]*a[i-1][j+1]*a[i-2][j+2]*a[i-3][j+3]);
		}
	cout<<ans<<endl;
	return  0;
}
