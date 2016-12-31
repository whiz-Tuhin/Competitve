#include <iostream>
#include <math.h>
#include <cstdlib>

typedef unsigned long long int ulli;

using namespace std;

int main( ){

  ulli n,d;

  cin>>n>>d;



  ulli* arr = (ulli*)malloc(sizeof(ulli)*n);
  int count = 0;
  for(int i = 0;i < n;i++){
               cin>>arr[i];
  }

  if(d == 1 && n == 1){
    cout<<0;
    exit(0);
  }
  else if(d == 1 && n!=1){
    cout<<(n-4);
    exit(0);
  }


  for(int i = 0;i < n-2;i++){
               for(int j = i+1;j < n-1;j++){
                              if(arr[j] - arr[i] == d){
                                          for(int k = i+1;k < n;k++){
                                                    if(arr[k] - arr[j] == d){
                                                              count++;
                                                              break;
                                                    }
                                          }
                                          break;
                              }

              }
               //cout<<"I came here after break"<<endl;
  }

  cout<<count<<endl;
  free(arr);

  return 0;
}
