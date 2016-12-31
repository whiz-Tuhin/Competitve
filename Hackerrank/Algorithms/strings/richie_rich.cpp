#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <math.h>

using namespace std;


int check_greater(int i,int j){
      return (i>j);
}

int main(){

  int n,k;
  cin>>n>>k;

  string str;

  cin>>str;

  //int len = str.length();

  int mid = n/2;
  int count = 0;

  for(int i = 0;i < mid;i++){
        if(str[i] != str[n-1-i]){
                count++;
        }
  }

  for(int i = 0;i < mid;i++){
               if(str[i] == str[n-1-i]){
                         continue;
               }
               else if((str[i] != str[n-i-1]) && (str[i] != '9' && str[n-1-i] != '9')){
                         str[i] = '9';
                         str[n-1-i] = '9';
                         count += 2;
               }
               else if(str[i] != str[n-i-1]){
                        if(str[i] == '9'){
                                  str[n-1-i] = str[i];
                                  count++;
                        }
                        else if(str[n-1-i] == '9'){
                                  str[i] = str[n-1-i];
                                  count++;
                        }
               }

               if(count >= k){
                        break;
               }
  }

  cout<<str<<endl;



  return 0;
}
