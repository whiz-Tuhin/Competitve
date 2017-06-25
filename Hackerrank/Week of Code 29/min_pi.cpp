#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>

#define ulli unsigned long long int
// #define pi  3.14159265358979323846

using namespace std;

int main(){

  ios_base::sync_with_stdio(false);

  map<ulli,string> mymap;

  ulli min,max;
  cin>>min>>max;
  long double pi = 3.14159265358979323846;
  long double last_diff = 0;
  for(ulli d = min;d <= max;d++){
                    ulli min = 3*d;
                    long double frac_min = min / d;
                    long double diff = abs(pi - frac_min);

                    while(1){
                          long double new_min = min + 1;
                          long double new_val = new_min / d;
                          long double new_diff = abs(pi - new_val);

                          if(new_diff < diff){
                                frac_min = new_min;
                                diff = new_diff;
                          }
                          else{
                                break;
                          }
                    }

                    if(mymap.empty()){
                            ulli fm = (ulli)frac_min;
                            string str = to_string(fm) + "/" + to_string(d);
                            mymap.insert(pair<long double,string>(diff,str));
                            last_diff = diff;
                    }
                    else if(diff < last_diff){
                            mymap.clear();
                            ulli fm2 = (ulli)frac_min;
                            string str = to_string(fm2) + "/" + to_string(d);
                            mymap.insert(pair<long double,string>(diff,str));
                            last_diff = diff;

                    }
  }

  cout<<mymap.find(last_diff)->second;


  return 0;
}
