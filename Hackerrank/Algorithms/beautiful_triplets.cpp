#include <iostream>
#include <math.h>
#include <cstdlib>

typedef unsigned long long int ulli;

using namespace std;

int main( ){

  ulli n,d;

  cin>>n>>d;

  ulli* arr = (ulli*)malloc(sizeof(ulli)*n);

  for(int i = 0;i < n;i++){
               cin>>arr[i];
  }
  int count = 0;

  for(int i = 0;i < n-2;i++){
               for(int j = i+1;j < n-1;j++){
                          for(int k = j+1;k < n;k++){
                                     if(arr[j] - arr[i] == d && arr[k] - arr[j] == d){
                                                  count++;
                                     }
                          }
               }
  }

  cout<<count<<endl;
  free(arr);

  return 0;
}
