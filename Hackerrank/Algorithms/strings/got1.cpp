#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <math.h>

using namespace std;

typedef unsigned long long int ulli;

int main( ){

  string str;
  cin>>str;

  int arr[26] = {0};
  for(int i = 0;i < str.length();i++){
               arr[str[i] - 'a']++;
  }

  ulli len = str.length();
  ulli count = 0;
  if(len%2 == 0){
            for(int i = 0;i < 26;i++){
                          if(arr[i]%2 != 0){
                                  cout<<"NO"<<endl;
                                  exit(0);
                          }

            }
  }
  else{
            for(int i = 0;i < 26;i++){
                          if(arr[i]%2 != 0){
                                  count++;
                                  if(count > 1){
                                        cout<<"NO"<<endl;
                                        exit(0);
                                  }
                          }
                          else{
                                  continue;
                          }
            }
  }

  cout<<"YES"<<endl;
  return 0;
}
