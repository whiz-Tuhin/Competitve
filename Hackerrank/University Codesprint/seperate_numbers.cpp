//TODO := i'm not able to figure out the logic as of now

#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>

using namespace std;

typedef unsigned long long int ulli;

vector<int> convert_to_vector(ulli num){

      vector<int> digits;

      while(num > 0){
              digits.push_back(num%10);
              num /= 10;
      }

      return digits;
}

int main(){

      int q;
      cin>>q;

      for(int i = 0;i < q;i++){

                   int num;
                   cin>>num;

                   vector<int> digits = convert_to_vector(num);

                   int i  = 1;
                   while(i < digits.size()){

                            if(digits[i] - digits[i-1] != 1){

                            }
                   }



      }

      return 0;
}
