#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <utility>


using namespace std;

typedef long long ll;
int main(){

  ios_base::sync_with_stdio(false);

  ll t;
  cin>>t;

  while(t > 0){

    ll x11,y11,x12,y12;
    ll x21,y21,x22,y22;

    cin>>x11>>y11>>x12>>y12;
    cin>>x21>>y21>>x22>>y22;

    int sn1_h = 0,sn1_v = 0,sn2_h = 0,sn2_v = 0;

    if(x11 == x12){
          sn1_v = 1;
    }
    if(y11 == y12){
          sn1_h = 1;
    }
    if(x21 == x22){
          sn2_v = 1;
    }
    if(y21 == y22){
          sn2_h = 1;
    }

    //4 cases possible

    if(sn1_h && sn2_h){


            if(y11 != y21){
                  cout<<"no"<<endl;
            }
            int a1 =  min(x11,x12);
            int b1 = max(x11,x12);

            int a2 = min(x21,x22);
            int b2 = max(x21,x22);

            if(b1 < a2 || a1 > b2){
                cout<<"no"<<endl;
            }
            else{
                  cout<<"yes"<<endl;
            }
    }
    else if(sn1_h && sn2_v){
            if(y11 != y21){
                  if(y11 != y22){
                        cout<<"no"<<endl;
                  }
                  else{
                        if(x11 == x22 || x12 == x22){
                                cout<<"yes"<<endl;
                        }
                        else{
                                cout<<"no"<<endl;
                        }
                  }
            }
            else{
                      if(x11 == x21 || x12 == x21){
                              cout<<"yes"<<endl;
                      }
                      else{
                              cout<<"no"<<endl;
                      }

            }
    }
    else if(sn1_v && sn2_h){
            if(y21 != y11){
                  if(y21 != y12){
                        cout<<"no"<<endl;
                  }
                  else{
                      if(x21 == x12 || x22 == x12){
                            cout<<"yes"<<endl;
                      }
                      else{
                            cout<<"no"<<endl;
                      }
                 }
          }
          else{
                if(x21 == x11 || x22 == x11){
                        cout<<"yes"<<endl;
                }
                else{
                        cout<<"no"<<endl;
                }

        }
  }

  else if(sn1_v && sn2_v){
        if(x11 != x21){
              cout<<"no"<<endl;
        }

        int a1 =  min(y11,y12);
        int b1 = max(y11,y12);

        int a2 = min(y21,y22);
        int b2 = max(y21,y22);

        if(b1 < a2 || a1 > b2){
            cout<<"no"<<endl;
        }
        else{
              cout<<"yes"<<endl;
        }
  }


    t--;
}

  return 0;
}
