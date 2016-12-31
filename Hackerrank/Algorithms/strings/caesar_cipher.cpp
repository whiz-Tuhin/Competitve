#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>


using namespace std;

int main( ){

  int n,k;
  cin>>n;
  char s[n];
  cin>>s;
  cin>>k;

  for(int i = 0;i < n;i++){
               if(((int)s[i] >= 97 && (int)s[i] <= 122)){
                         int index1 = ((int)s[i] + (k%26));
                         if(index1 > 122){
                                  s[i] = (char)(97 + ((k%26)-1) - (122 - (int)s[i]));
                         }
                         else{
                                  s[i] = (char)((int)s[i] + k%26);
                         }
               }
               if(((int)s[i] >= 65 && (int)s[i] <= 90)){
                        int index1 = ((int)s[i] + (k%26));
                        if(index1 > 90){
                          s[i] = (char)(65 + ((k%26)-1) - (90 - (int)s[i]));
                        }
                        else{
                              s[i] = (char)((int)s[i] + k%26);
                        }
               }
  }

  cout<<s<<endl;



  return 0;
}
