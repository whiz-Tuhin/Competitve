#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>

using namespace std;

int main( ){

  string s;
  cin>>s;
  int len = s.length();

  string final;

  for(int i = 0;i < (len)/3;i++){
               final.append("SOS");
  }
  int count = 0;
  for(int i = 0;i < len;i++){

            if(final[i] != s[i]){
                    count++;
            }
  }

  cout<<count;


  return 0;
}
