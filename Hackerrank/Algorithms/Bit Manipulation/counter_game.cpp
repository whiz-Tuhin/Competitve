#include <iostream>
#include <cstdlib>
#include <math.h>
#include <vector>

using namespace std;

typedef unsigned long long int ulli;


int main(){

  int t;
  cin>>t;

  while(t > 0){

    ulli n;
    cin>>n;

    int count = 0;


          double result = log2(n);
          if(floor(result) == ceil(result)){
                      if(((int)(result))%2 == 0){
                              cout<<"Richard"<<endl;
                      }
                      else{
                              cout<<"Louise"<<endl;
                      }
          }
          else{
                      if(((int)(result)-1)%2 == 0){
                              cout<<"Louise"<<endl;
                      }
                      else{
                              cout<<"Richard"<<endl;
                      }
          }

    t--;
  }



  return 0;
}
