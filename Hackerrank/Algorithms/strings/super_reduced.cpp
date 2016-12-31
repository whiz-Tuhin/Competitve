//Things Leanrt
//if you have an object of string type if you want to insert
// string str;
/*
str.insert(position,number of times you wanna insert,the character you want to insert)
*/


#include <iostream>
#include <string>
#include <cstring>
#include <math.h>
#include <vector>


using namespace std;

int main( ){

  string s;
  string f;
  cin>>s;

 while(1){
  for(int i = 0;i < s.length()-1;i++){
               if(s[i] == s[i+1]){
                      s[i] = '#';
                      s[i+1] = '#';
               }
  }

  int k = 0;
  for(int i = 0;i < s.length();i++){
              if(s[i] != '#'){
                      f.insert(k++,1,s[i]);
              }
  }

  int count = 0;
  for(int i = 0;i < f.length();i++){
               if(f[i] != f[i+1]){
                    count++;
               }
  }

  if(count == f.length()-1){
          cout<<f<<endl;
          break;
  }
  else if(f.length() == 0){
          cout<<"Empty String"<<endl;
          break;
  }
  else{
        s = f;
  }
}


  return 0;
}
