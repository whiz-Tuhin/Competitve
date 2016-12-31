#include <string>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <math.h>

using namespace std;


int main( ){

  string s;
  cin>>s;

  int count = 0;
  for(int i = 0;i <= s.length()-2;i = i+3){
        int index = 0;
        for(int j = 0;j < 3 && index < 3;j = (j+1)%3){
                     if(j == 0 && s[i+j] != 'S'){
                            count++;
                     }
                     if(j == 1 && s[i+j] != 'O'){
                            count++;
                     }
                     if(j == 2 && s[i+j] != 'S'){
                            count++;
                     }
                     index++;
        }
  }
  cout<<count;

  return 0;
}
