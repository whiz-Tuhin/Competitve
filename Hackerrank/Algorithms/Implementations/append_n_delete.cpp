#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main( ){

  char s[101],t[101];
  int k;
  int i = 0;

  cin.getline(s,101);
  cin.getline(t,101);
  cin>>k;

  int s_len = strlen(s);
  int t_len = strlen(t);

  for(i = 0;i < strlen(s) && i < strlen(t);i++){
          if(s[i] != t[i]){
            // cout<<"The compared letter is "<<s[i]<<" "<<t[i]<<endl;
            // cout<<i<<endl;
            break;
          }
  }


  int s_index = s_len - i;
  int t_index = t_len - i;

  cout<<s_index<<" "<<t_index<<endl;
  int p = k - (s_index + t_index);

  cout<<p<<endl;
  if(p == 0)
        cout<<"Yes";
  else if(p < 0)
        cout<<"No";
  else{
        if(p%2 == 0){
              cout<<"Yes";
        }
        else{
              if(p >= 2*i){
                    cout<<"Yes";
              }
              else{
                    cout<<"No";
              }
        }
  }

  return 0;
}
