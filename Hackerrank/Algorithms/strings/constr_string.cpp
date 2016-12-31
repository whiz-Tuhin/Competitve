#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <math.h>

using namespace std;

int main( ){


  int n;
  cin>>n;

  while(n > 0){

    string str;
    cin>>str;

    int arr[26] = {0};
    for(int i = 0;i < str.length();i++){
                 arr[str[i] - 'a']++;
    }
    int count = 0;
    for(int i = 0;i < 26;i++){
                  if(arr[i] != 0){
                            count++;
                  }
    }

    cout<<count<<endl;

    n--;
  }

  return 0;
}
