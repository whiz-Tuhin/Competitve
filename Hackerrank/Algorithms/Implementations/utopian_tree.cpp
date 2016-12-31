#include <iostream>
#include <string>

using namespace std;

int calculate_height(int n,int h){

            if(n == 0){
                return h;
            }

            if(n%2 == 0){
                int r = n/2;
                for(int i = 0;i < r;i++){
                            h = h*2;
                            h++;
                }
            }
            if(n%2 == 1){
                h = h*2;
                int r  = (n-1)/2;
                for(int i = 0;i < r;i++){
                             h++;
                             h = h*2;
                }
            }

            return h;
}

int main( ){

  int t;
  cin>>t;
  int n,h = 1,res;
  for(int i = 0;i < t;i++){
               h = 1;
               cin>>n;
               res = calculate_height(n,h);
               cout<<res<<endl;
  }

  return 0;
}
