#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

  ios_base::sync_with_stdio(false);

  string w;
  cin>>w;


  int flag = 0;
  for(int i = 0;i < w.length()-1;i++){
               if(w[i] == w[i+1]){
                 flag = 1;
                 break;
               }

               if(w[i] == 'a' || w[i] == 'e' || w[i] == 'o' || w[i] == 'u' || w[i] == 'i' || w[i] == 'y'){
                    if(w[i+1] == 'a' || w[i+1] == 'e' || w[i+1] == 'o' || w[i+1] == 'u' || w[i+1] == 'i' || w[i+1] == 'y'){
                        flag = 1;
                        break;
                    }
               }
  }

  if(flag){
      cout<<"No"<<endl;
  }

  else{
      cout<<"Yes"<<endl;
  }

  return 0;
}
