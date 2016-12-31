#include <iostream>
#include <cstdlib>
#include <math.h>
#include <vector>

using namespace std;

typedef unsigned long long int ulli;

int main( ){

  int n,t,i,j;
  cin>>n>>t;
  vector<int>width(n);

  for(int i = 0;i < n;i++){
               cin>>width[i];
  }
  while(t > 0){
          cin>>i>>j;
          int min = 4;
          for(int k = i;k <= j;k++){
                       if(width[k] < min){
                                  min = width[k];
                       }
          }
          cout<<min<<endl;

          t--;

  }

  return 0;
}
