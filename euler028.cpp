#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm> 
using namespace std;

// 2 4 6 8 12 16 20 24 30 36 42 48

const int MAX = 200;

int spiral[MAX];


void diagonal(int n){
	spiral[0] = 2;
	for(int i=1; i < n*n; i++){
		int j = 0;
		for(int x = 0; x < n*n; x+=2){
			for(int j=0; j<4; j++){
			spiral[i] = spiral[i-1] + x;
			}
		}	
	}
}


int main() {
	
	diagonal(5);    
    for(int i=0; i<MAX; i++){
    	cout<< spiral[i] <<endl;
    }
    int T;
    scanf("%d", &T);
    while(T--){
        int N;
        scanf("%d", &N);
        
    }
    return 0;
}
