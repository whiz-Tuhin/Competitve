#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <math.h>

using namespace std;

int main( ){

  char s[100];
  unsigned long long int n;

  cin.getline(s,101);
  cin>>n;

  int len = strlen(s);
  unsigned long long int count_a = 0;
  for(int i = 0;i < len;i++){
          if(s[i] == 'a')
                count_a++;
  }
  //cout<<"Count a = "<<count_a<<endl;
  unsigned long long total_a = 0,rem = 0;
  while(n > 0){

        if(n <= len){
              for(int i = 0;i < n;i++){
                    if(s[i] == 'a')
                          total_a++;
              }
              break;
        }
        unsigned long long int sets = floor((n/len));
        //cout<<"***"<<sets<<"***"<<endl;
        total_a += sets*(count_a);
        n = n - (sets*len);
  }

  cout<<total_a;
  return 0;
}
