#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>

using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);

    ll t;
    cin>>t;

    int check_flag = 1;

    while(t--){

      ll x11,y11,x12,y12;
      ll x21,y21,x22,y22;

      cin>>x11>>y11>>x12>>y12;
      cin>>x21>>y21>>x22>>y22;

      if(y11 == y12){       //if snake 1 is ||l
            if(y21 == y22){ //if snake 2 is ||l
                    int a = max(x11,x12);
                    int b = min(x11,x12);

                    if((x21 > a && x22 > a) || (x21 < b && x22 < b )){
                              check_flag = 0;
                    }
                    else{
                              check_flag = 1;
                    }
            }
            else{
                    if((x11 == x21 && y11 == y21) || (x11 == x22 && y11 == y22)){
                              check_flag = 1;
                    }
                    else if((x12 == x21 && y12 == y21) || (x12 == x22 && y12 == y22)){
                              check_flag = 1;
                    }
                    else{
                              check_flag = 0;
                    }
            }
      }
      else{
          if(x21 == x22){
                int a  = max(y11,y12);
                int b  = min(y11,y12);

                if((y21 > a && y22 > a) || (y21 < b && y22 < b )){
                          check_flag = 0;
                }
                else{
                          check_flag = 1;
                }
          }
          else{
                if((x11 == x21 && y11 == y21) || (x11 == x22 && y11 == y22)){
                      check_flag = 1;
                }
                else if((x12 == x21 && y12 == y21) || (x12 == x22 && y12 == y22)){
                      check_flag = 1;
                }
                else{
                      check_flag = 0;
                }
          }
      }

      if(check_flag){
              cout<<"yes"<<endl;
      }
      else{
              cout<<"no"<<endl;
      }
  }

  return 0;
}
