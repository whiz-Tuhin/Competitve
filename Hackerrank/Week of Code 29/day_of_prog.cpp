#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>

using namespace std;


int main(){

    int n;
    cin>>n;

    int d,m,y,sum = 0;
    int i,j;
    int temp = 0;
    if(n >= 1700 && n <= 1917){
      i = 0;
      if(n%4 == 0){
            printf("12.09.%d",n);
      }
      else{
            printf("13.09.%d",n);
      }
    }
    else if(n == 1918){
            print("26.09.1918");
    }
    else{
      i = 0;
      if(n%400 == 0 || (n%4==0 && n%100 !=0)){
            printf("12.09.%d",n);
      }
      else{

        printf("13.09.%d",n);
      }
    }

    return 0;

}
