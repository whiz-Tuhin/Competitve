#include <iostream>
#include <math.h>
#include <cstdlib.h>

using namespace std;

int gcd(int a,int b){
    if(a == b){
        return a;
    }
    else{
         if(b > a){
               return gcd(a,b-a);
         }
         if(a > b){
               return gcd(a-b,b);
         }
    }
}


int main( ){

  int a[10],b[10];

  int n,m
  for(int i = 0;i < n;i++){
               cin>>a[i];
  }
  for(int j = 0;j < m;j++){
               cin>>b[j];
  }

  for(int i = 0;i < n;i++){
      


  }





  return 0;
}
