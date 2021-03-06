#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

class solution{

      public:
          int good_sets(vector<int> &a);

};

int solution::good_sets(vector<int> &a){

      int setcount = 0;
      for(int i = 0;i < a.size()-1;i++){
                  int count = 0;
                  for(int j = i+1;j < a.size();j++){
                              if(a[i]%a[j] == 0 || a[j]%a[i] == 0){
                                          count++;
                              }
                  }

                  setcount += 1;
      }

      return setcount;
}

int main(){

      int t;
      cin>>t;

      while(t-- > 0){
              int n;
              cin>>n;
              vector<int> a(n);

              for(int i = 0;i < n;i++)
                           cin>>a[i];

              solution s;

              int result = s.good_sets(a);

              cout<<result+n<<endl;
      }
}
