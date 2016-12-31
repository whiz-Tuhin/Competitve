#include <iostream>
#include <cstring>
#include <string>
#include <cstdlib>
#include <cstdlib>
#include <vector>
#include <math.h>

using namespace std;

int main( ){
  string s;

  int t;
  cin>>t;

while(t > 0){
  cin>>s;

  vector<char>r;

  for(int i = 0;i < s.length();i++){
               r.push_back(s[i]);
  }

  reverse(r.begin(),r.end());

  int flag = 0;
  for(int i = 1;i < s.length();i++){
          if(abs(s[i] - s[i-1]) != abs(r[i] - r[i-1])){
                  flag = 1;
                  break;
          }
  }
  if(flag){
        cout<<"Not Funny"<<endl;
  }
  else{
        cout<<"Funny"<<endl;
  }

  t--;
}

  return 0;
}
