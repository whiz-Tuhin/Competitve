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

int main(){
    double n,p;
    cin>>n>>p;

    vector<double>a(n);
    vector<int>num;

    for(int i = 0;i < n;i++){
                 cin>>a[i];
    }

    ulli b = 0,prev;

    for(int i = 0;i < n;i++){
                 if(i == 0){
                        prev = ceil(a[i]/p);
                        num.push_back(prev);
                        b+= prev;
                 }
                 else{
                        vector<int>::iterator it;
                        it = find(num.begin(),num.end(),ceil(a[i]/p));

                        if(it != num.end()){
                                vector<int>::iterator it2 = num.begin();
                                int i = ceil(a[i]/p);

                                while(1){
                                      it = find(num.begin(),num.end(),i);
                                      if(it == num.end() && p*i > a[i]){
                                            break;
                                      }
                                      else{
                                            i++;
                                      }
                                }

                                num.push_back(i);
                                b+= i;
                        }

                      else{
                              num.push_back(ceil(a[i]/p));
                              b+= ceil(a[i]/p);
                      }

                 }
    }

    cout<<b<<endl;


    return 0;
}
