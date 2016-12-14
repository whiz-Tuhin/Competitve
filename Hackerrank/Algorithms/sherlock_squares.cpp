#include <iostream>
#include <math.h>

using namespace std;

int main( ){

  int t;

  cin>>t;
  unsigned long long int A,B;

  unsigned long long int count = 0;
  for(int i = 0;i < t;i++){

               count = 0;
               cin>>A>>B;

               int a = floor(sqrt(B)) - ceil(sqrt(A)) + 1;
               cout<<a<<endl;

  }

  return 0;
}
