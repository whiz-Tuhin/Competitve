#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int main( ){

  long long n,k;
  cin>>n>>k;
  int anna_cost;

  int* cost;
  cost = (int*)malloc(sizeof(int)*n);

  for(int i = 0;i < n;i++)
               cin>>cost[i];

  cin>>anna_cost;

  int total = 0;
  for(int i = 0;i<k;i++){
        total += cost[i];
  }
  for(int j = k+1;j<n;j++){
        total += cost[j];
  }
  //cout<<"Total = "<<total<<endl;

  if(total/2 == anna_cost){
        cout<<"Bon Appetit";
  }
  else{
      cout<<(anna_cost - (total/2));
  }

  return 0;
}
