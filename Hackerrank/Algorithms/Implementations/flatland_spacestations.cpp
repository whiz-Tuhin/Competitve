#include <iostream>
#include <vector>
#include <math.h>
#include <cstdlib>

using namespace std;

typedef unsigned long long int ulli;

ulli absolute(ulli a,ulli b){

      if(a == b)
            return 0;

      ulli res = (a > b)?(a - b):(b - a);
      return res;
}

int main( ){

  ulli n,m;
  cin>>n>>m;

  vector<ulli>spst(m);
  vector<ulli>dist;
  for(int i = 0;i < m;i++)
               cin>>spst[i];

  ulli min = 100001;
  for(ulli i = 0;i < n;i++){
               min = 100001;
               for(ulli j = 0;j < m;j++){
                             ulli temp = absolute(i,spst[j]);
                             if(temp < min){
                                    min = temp;
                             }
               }
               dist.push_back(min);
  }

  ulli max = 0;
  for(int i = 0;i < dist.size();i++){
               if(dist[i] > max){
                        max = dist[i];
               }
  }
  cout<<max;

  return 0;
}
