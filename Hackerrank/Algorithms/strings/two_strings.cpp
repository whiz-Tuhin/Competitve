#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <math.h>

using namespace std;

int main(){


  int p;
  cin>>p;

  while(p > 0){

    string str1,str2;
    cin>>str1;
    cin>>str2;
    int arr[26] = {0},brr[26] = {0};

    for(int i = 0;i < str1.length();i++){
                arr[str1[i] - 'a']++;
    }
    for(int i = 0;i < str2.length();i++){
                brr[str2[i] - 'a']++;
    }

    int flag = 0;

    for(int i = 0;i < 26;i++){
                 if(arr[i] != 0 && brr[i] != 0){
                          flag = 1;
                          break;
                 }
    }
    if(flag){
              cout<<"YES"<<endl;
    }

    else{
              cout<<"NO"<<endl;
    }
    p--;
  }


  return 0;
}
