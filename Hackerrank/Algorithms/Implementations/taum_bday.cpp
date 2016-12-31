#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

int main( ){

 int t;
 unsigned long long int b,w,x,y,z,total;

 cin>>t;
 for(int i = 0;i < t;i++){
              cin>>b>>w;
              cin>>x>>y>>z;

              if(x > y){
                    total = w*y;
                    if(x > z+y){
                          total = total + (z+y)*b;
                    }

                    else{
                          total = total + x*b;
                    }
              }
              else{
                    total = x*b;
                    if(y > z+x){
                          total = total + (z+x)*w;
                    }
                    else{
                          total = total + w*y;
                    }
              }

              cout<<total<<endl;

 }


 return 0;
}
