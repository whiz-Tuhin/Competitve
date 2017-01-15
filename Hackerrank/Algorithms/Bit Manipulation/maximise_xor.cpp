#include <iostream>
#include <cstdlib>
#include <math.h>
#include <vector>

using namespace std;

int main(){

  int l,r;
  cin>>l;
  cin>>r;

  int max = -1;
  for(int i = l;i <= r;i++){
               for(int j = l;j <= r;j++){
                            int temp = i^j;
                            if(temp > max){
                                      max = temp;
                            }
               }
  }

  cout<<max<<endl;


  return 0;
}
