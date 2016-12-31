#include <iostream>
#include <cstring>
#include <math.h>
#include <cstdlib>
#include <string>

using namespace std;


int main( ){

  int n,g;

  cin>>g;

  while(g > 0){
            cin>>n;
            string b;
            cin>>b;

            int arr[26] = {0};
            int count = 0;

            for(int i = 0;i < n;i++){
                      if(b[i] == '_')
                              count++;
                      else{
                            arr[(int)b[i] - 65]++;
                      }
            }

            int flag = 0;
            if(count == 0){
                      for(int i = 0;i < n;i++){
                                  if((i!=0 && i!=(n - 1) && (b[i] == b[i+1] || b[i] == b[i-1])) || (i == 0 && (b[i] == b[i+1])) || (i == (n-1) && b[i] == b[i-1])){
                                    
                                  }
                                  else{
                                      flag = 1;
                                      break;
                                  }
                      }
            }
            else{
                    for(int i = 0;i < 26;i++){
                                 if(arr[i] == 1){
                                            flag = 1;
                                            break;
                                 }
                    }

            }

            if(flag == 0){
                    cout<<"YES"<<endl;
            }
            else{
                    cout<<"NO"<<endl;
            }

            g--;

  }



  return 0;
}
