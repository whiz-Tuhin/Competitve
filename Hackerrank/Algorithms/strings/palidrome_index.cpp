#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <math.h>

using namespace std;

int main( ){


  int t;
  cin>>t;

while(t > 0){
  string str;
  cin>>str;
  int n = str.length();
  //cout<<"n = "<<n<<endl;
  int mid = str.length()/2;
  int flag = 0,pos;

  // for(int i = 0;i < mid;i++){
  //              cout<<str[n-1-i]<<" "<<str[i]<<endl;
  //
  // }
  for(int i = 0;i < mid;i++){


               if(str[(n-1)-i] != str[i]){

                          if(str[i+1] == str[(n-1)-i] && str[i+2] == str[(n-1)-i-1]){
                                  //cout<<str[i+1]<<" "<<str[(n-1)-i]<<endl;
                                  pos = i;
                                  flag = 1;
                                  break;
                          }
                          if(str[(n-1)-i-1] == str[i] && str[i+1] == str[(n-1)-i-2]){
                                  pos = (n-1)-i;
                                  flag = 1;
                                  break;
                          }
               }

  }





  if(flag)
      cout<<pos<<endl;
  else
      cout<<(-1)<<endl;

  t--;
}



  return 0;
}
