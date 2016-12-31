#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int find_digits(unsigned long long int N){

          int count = 0;
          unsigned long long int temp = N;
          while(temp!=0){
                  int rem = temp%10;
                  if(rem!=0 && N%rem == 0){
                        //cout<<"Digit = "<<rem<<endl;
                        count++;
                  }

                  temp /= 10;
          }

          return count;

}


int main( ){

  int t;
  cin>>t;
  unsigned long long int N;

  for(int i = 0;i <  t;i++){
               cin>>N;
               int res = find_digits(N);
               cout<<res<<endl;
  }


  return 0;
}
