#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <math.h>

using namespace std;

int main(){


  int t;
  cin>>t;

  while(t > 0){

          string str;
          cin>>str;
          int count = 0,mid = 0;
          mid  = (str.length())/2;
          int n = str.length();

          for(int i = 0;i < mid;i++){
                //cout<<str[n-1-i]<<" "<<str[i]<<endl;
                count += abs(str[n-1-i] - str[i]);
          }

          cout<<count<<endl;



          t--;
  }

  return 0;
}
