#include <bits/stdc++.h>
//#define MOD 1000000007
using namespace std;

typedef long long ulli;

long long MOD = 1000000007;
long long M = 1000000006;

ulli fast_exp(ulli base,ulli exp,ulli m){

        ulli res = 1;
        base = base%(m);

        while(exp > 0){
                if(exp%2 == 1){
                        res = (res*base)%(m);
                }
                exp = exp >> 1;
                base = (base*base)%(m);
        }
        return res;
}

ulli towerColoring(ulli n){
    // Complete this function
    ulli temp = fast_exp(3,n,M);
    ulli f = fast_exp(3,temp,MOD);
    return f;

}

int main() {
    ulli n;
    cin >> n;
    ulli result = towerColoring(n);
    cout << result << endl;
    return 0;
}
