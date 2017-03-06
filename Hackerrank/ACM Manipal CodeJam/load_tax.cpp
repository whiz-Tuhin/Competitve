#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

typedef unsigned long long int ulli;
int main() {

    ulli n;
    cin>>n;
    vector<ulli> t(n);

    for(ulli i = 0;i < n;i++){
                 cin>>t[i];
    }
    ulli sum = 0;
    for(ulli i = 0;i < n;i++){
         sum = sum + t[i]*(pow(2,(n-i-1)));
         //cout<<"sum = "<<sum<<endl;
    }
    ulli min = ceil(sum/(pow(2,n)));
    cout<<min<<endl;
    return 0;
}
