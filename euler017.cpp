#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <stack>
using namespace std;

static string ones[] = {"Zero", "One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
static string teen[] = {"Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
static string tens[] = {"", "Ten", "Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};
static string mul10[] = {"", "Thousand","Million","Billion","Trillion"};

string last2(long long n){
	// suppose 0 < n <= 99
	if (n<10)
		return ones[n];
	if (n<20)
		return teen[n-10];

	long long t = n/10, o = n%10;
	if(o == 0)
		return tens[t];
	else
		return tens[t] + " " + ones[o];
}

string last3(long long n){
	//suppose   0< n <=999
	long long hundr = n/100;
	long long l2 = n % 100;
	if(hundr == 0){
		return last2(n);
	}
	else
	{
		if(l2 == 0)
			return ones[hundr] + " Hundred";
		else
			return ones[hundr]+ " Hundred " + last2(l2);
	}
}

int main(){
	

	long long T;
	scanf("%lld", &T);
	while(T--){
		long long N;
		scanf("%lld", &N);



		if(N == 0){
			printf("%s\n", "Zero");
		}
		else
		{
			long long g = 0;
			stack<string> parts;
			for(; N>0; g++){
				long long n = N%1000;
				N /= 1000;

				if(n>0){
					string part = "";
					if(g == 0)
						part = last3(n);
					else
						part = last3(n) + " " + mul10[g];
					parts.push(part);
				}
			}

			string result = "";

			for(long long i=0; !parts.empty(); i++){
				if(i>0) result+=" ";
				result += parts.top();
				parts.pop();
			}
			
			cout<< result <<"\n";
		}
	}
	return 0;
}
