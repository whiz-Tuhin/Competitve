#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main( ){

  int n;
  cin>>n;

  vector<int>b(n);

  for(int i = 0;i < n;i++){
               cin>>b[i];
  }

  int count = 0;
  for(int i = 0;i < n-1;i++){

               if(b[i]%2 == 1){
                        b[i] = b[i] + 1;
                        b[i+1] = b[i+1] +1;
                        count+=2;
               }
  }
  if(b[n-1]%2 == 1){
          cout<<"NO";
  }
  else{
          cout<<count;
  }



  return 0;
}
