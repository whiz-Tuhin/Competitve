#include <iostream>
#include <math.h>
#include <vector>

typedef unsigned long long int ulli;

int main( ){

  int n,m,c;
  int t;

  std::cin>>t;

  while(t > 0){

        std::cin>>n>>c>>m;

        int tot = n/c;

        int temp = tot;
        while(temp >= m){
                tot = tot + temp/m;
                temp = temp/m + temp%m;
        }
        std::cout<<tot<<std::endl;

        t--;

  }



  return 0;
}
