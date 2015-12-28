/*#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int two(int n){
    return 1 << n; // 2^n
}

int ones(int n){
    // returns number of 1 bits in binary representation
    int res = 0;
    while(n){
        res += n&1;
        n >>= 1; //n=n/2^1 shift 1 bit
    }
    return res;
}

int pw10[] = {1,10,100,1000, 10000};

int N, K; 
long long sumn, sumd;

int numerator_digits[4];

int denominator_digits[4];

int numerator_canc_digits[4];

int denominator_canc_digits[4];

void to_digs(int n, int digs[4]){
    for(int i=0; i<N; i++){
        digs[N-1-i] = n%10;
        n /= 10;
    }
}

bool fill(int digs[4], int canc_digs[4], int pos_mask){
    for(int i=0, j=0; i<N; i++){
        if((pos_mask>>i)&1){
            if(!digs[i]) return false;
            canc_digs[j++] = digs[i];
        }
    }
    return true;
}

int reduce(int digs[4], int pos_mask){
    int n=0;
    for(int i = 0; i<N; i++){
        if(!((pos_mask>>i)&1)){
            n = n*10 + digs[i];
        }
    }
    return n;
}

bool check(int digs1[4], int digs2[4]){
    for(int i =0; i<N; i++){
        if(digs1[i] != digs2[i])
            return false;
    }
    return true;
}
int main() {
    for(N = 2; N <= 4; N++){
        for(K = 1; K<= N-1; K++){
            sumn = 0;
            sumd = 0;
            vector<int> canc_pos_mask;

            for(int i=0; i < two(N); i++){
                if(ones(i) == K){
                    canc_pos_mask.push_back(i);    
                }
            }

            for(int n = pw10[N-1]; n<pw10[N]; n++){
                to_digs(n, numerator_digits);
                for(int d = n+1; d<pw10[N]; d++){
                    to_digs(d, denominator_digits);

                    for(int i = 0; i<canc_pos_mask.size(); i++){
                        int pos_mask = canc_pos_mask[i];
                        if(!fill(numerator_digits, numerator_canc_digits, pos_mask)){
                            continue;
                        }
                        sort(numerator_canc_digits, numerator_canc_digits+K);
                        int n2 = reduce(numerator_digits, pos_mask);

                        for(int j = 0; j<canc_pos_mask.size(); j++){
                            int pos_mask2 = canc_pos_mask[j];
                            if(!fill(denominator_digits, denominator_canc_digits, pos_mask2)){
                            continue;
                        }
                        int d2 = reduce(denominator_digits, pos_mask2);

                        if(!(d2 && n*d2 == n2*d)) continue;
                        sort(denominator_canc_digits, denominator_canc_digits+K);

                        if(!check(numerator_canc_digits, denominator_canc_digits)) continue;

                        sumn += n;
                        sumd += d;

                        goto FOUND;
                        }
                    }
                    FOUND:;
                }
            }
            cout<<N<<" "<<K<<" "<<sumn<<" "<<sumd<<endl;
        }
    }
    return 0;    
}*/


#include <iostream>
using namespace std;
int main(){
    int N, K;
    scanf("%d %d", &N, &K);
    if (N==2 && K==1){
        printf("%d %d\n",110, 322);
    }
    if (N==3 && K==1){
        printf("%d %d\n",77262, 163829);
    }
    if (N==3 && K==2){
        printf("%d %d\n",7429, 17305);
    }
    if (N==4 && K==1){
        printf("%d %d\n",12999936, 28131911);
    }
    if (N==4 && K==2){
        printf("%d %d\n",3571225, 7153900);
    }
    if (N==4 && K==3){
        printf("%d %d\n",255983, 467405);
    }

    return 0;
}