#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

int main(){

  int n;
  cin>>n;

  if(n == 2){
      cout<<"min(int,int)"<<endl;
      exit(0);
  }
  else{
      string temp = " int)";
      for(int i = 0;i < n-1;i++){
                 temp = "min(int," + temp;
      }
      for(int i = 0;i < n-2;i++){
                temp  = temp + ")";
      }
      cout<<temp<<endl;
  }

  return 0;
}
