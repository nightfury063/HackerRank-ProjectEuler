#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long long int sum35(long long int n){
	n--;
	long long int n1,n2,n3,sum;
	n1 = n/3;
	n2 = n/5;
	n3 = n/15;
	sum = (3* n1*(n1+1))/2 + (5*n2*(n2+1))/2 - (15*n3*(n3+1))/2;
	return sum;
}

int main(int argc, char const *argv[])
{

	ios_base::sync_with_stdio(false);

	long long int t; 
	cin>>t;
	
	long long int n;
	while(t--){
		cin>>n;
		
		cout<<sum35(n)<<"\n";
	
	}

	return 0;
}