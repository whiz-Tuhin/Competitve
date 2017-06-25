#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <map>
#include <set>
#include <iomanip>

using namespace std;

int main(){
      ios_base::sync_with_stdio(false);

      int q;
      cin>>q;

      while(q-- > 0){

                string s;
                cin>>s;

                int start = 0,end = 0;
                int count = 0;

                while(start < s.length() && end < s.length()){

                              if(s[start] == '1'){
                                      int end = start + 1;
                                      while(s[end] == '0'){
                                            end++;
                                      }
                                      if(s[end] == '1' && end - start > 1){
                                          count++;
                                      }
                                      start = end;
                              }
                              else{
                                      start++;
                              }
                }

                cout<<count<<endl;
      }

      return 0;

}
