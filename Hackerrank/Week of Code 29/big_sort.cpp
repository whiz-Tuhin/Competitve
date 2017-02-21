#include <iostream>
#include <string>
#include <climits>
#include <vector>
#include <cstdlib>
#include <sstream>
#include <ctype.h>

using namespace std;

typedef unsigned long long ull;

bool compare(string a,string b){

            if(a.size() > 10 ||  b.size() > 10){

                      if(a.size() == b.size()){

                                return stoull(a.substr(0,10)) < stoull(b.substr(0,10));
                      }

                      return a.size() < b.size();
            }

            else{
                      return stoull(a) < stoull(b);
            }
}


int main(){

      ull n;
      cin>>n;

      vector<string> arr(n);

      for(ull i = 0;i < n;i++){
                  cin>>arr[i];
      }

      sort(arr.begin(),arr.end(),compare);

      for(ull i = 0;i < n;i++){
                  cout<<arr[i]<<endl;
      }
      return 0;
}
