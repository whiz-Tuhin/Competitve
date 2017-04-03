#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

      ios_base::sync_with_stdio(false);

      int t;
      cin>>t;

      while(t--){

            string s;
            cin>>s;

            int count_d,count_i; count_d = count_i = 0;
            int n = s.length();

            for(int i = 0;i < s.length();i++){
                         if(s[i] == 'D')
                            count_d++;
                         else
                            count_i++;
            }

            int ptr_i = 0;
            int ptr_d = 0;

            vector<int> a(n+1);
            vector<int> b(n+1);

            for(int i = 0;i <= n;i++)
                  a[i] = i+1;

            ptr_d = ptr_i = (count_d);

            b[0] = a[ptr_i];

            for(int i = 1;i <= n;i++){

                    if(ptr_i >=1 && ptr_d <= n){
                         if(s[i-1] == 'D'){
                                  ptr_d--;
                                  b[i] = a[ptr_d];
                         }
                         else{
                                  ptr_i++;
                                  b[i] = a[ptr_i];
                         }
                    }
            }

            for(int i = 0;i < b.size();i++)
                         cout<<b[i];

            cout<<endl;

      }
      return 0;

}
