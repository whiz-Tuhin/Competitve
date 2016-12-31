#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;

int main( ){


  int n,k;
  cin>>n>>k;

  int* c;
  c = (int*)malloc(sizeof(int)*n);

  for(int i = 0;i < n;i++)
               cin>>c[i];
  int e = 100;
  int i = 0;
  while(1){
        e--;
        i = (i+k)%n;
        if(c[i]){
              e=e-2;
        }
        if(i == 0)
            break;
  }

  cout<<e;

  return 0;
}
