#include <iostream>
#include <bitset>
#include <math.h>
#include <vector>

using namespace std;

int main( ){

  int n;
  cin>>n;
  string str;

  cin>>str;
  int count = 0;
  for(int i = 0;i < str.length()-2;i++){

              if(str[i] == '0' && str[i+1] == '1' && str[i+2] == '0'){
                                str[i+2] = '1';
                                count++;

            }
  }
  cout<<count<<endl;



  return 0;
}
