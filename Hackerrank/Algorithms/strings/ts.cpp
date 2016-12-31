#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <math.h>

using namespace std;

typedef unsigned long long int ulli;

ulli arra[100500];

bool mycomp(ulli a,ulli b){
            return (a < b);
}


int main(){
    ulli n;
    long double p;
    cin>>n>>p;
    ulli b = 0;

    vector<ulli>a(n);

    for(ulli i = 0;i < n;i++){
                 cin>>a[i];
    }

    sort(a.begin(),a.end(),mycomp);

    for(ulli i = 0;i < n;i++){
              ulli val = ceil(a[i]/p);
              //cout<<"val = "<<val<<endl;
              if(arra[val] == 0){
                      arra[val]++;
                      b += val;
                    //  cout<<"*****1"<<endl;
              }
              else{
                    for(ulli j = val+1; ;j++){
                        if(arra[j] == 0){
                             arra[j]++;
                             b += j;
                             break;
                             //cout<<"*****2"<<endl;
                        }
                    }
              }
    }

    cout<<b<<endl;

    return 0;
}
