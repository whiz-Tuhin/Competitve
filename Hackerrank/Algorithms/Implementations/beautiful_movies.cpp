//Things which i learnt is how to reverse a number in one loop

#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

int check_beautiful(long long x,long long k){

        long long temp = x;
        long long rev = 0;

        while(temp != 0){

              long long rem = temp%10;
              rev = rev*10 + rem;
              temp /= 10;
        }

        long long res = rev - x;
        if(abs(res)%k == 0){
            return 1;
        }

        return 0;

}


int main( ){

  ios_base::sync_with_stdio(false);

  long long i,j,k;
  cin>>i>>j>>k;
  int count= 0;
  for(long long x = i;x <= j;x++){
                     if(check_beautiful(x,k)){
                                count++;
                     }
  }

  cout<<count;


  return 0;
}
