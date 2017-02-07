#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main( ){

  ios_base::sync_with_stdio(false);

  int t,n;
  cin>>t;

  while(t > 0){
        cin>>n;
        char g[n][n];

        for(int i = 0;i < n;i++){
                     for(int j = 0;j < n;j++){
                                  cin>>g[i][j];
                     }
        }

        for(int i = 0;i < n;i++){
                     sort(g[i],g[i]+n);
        }

        int flag = 1;
        for(int i = 0;i < n;i++){
                     for(int j = 0;j < n-1;j++){
                                  if(g[j][i] > g[j+1][i]){
                                        flag = 0;
                                        break;
                                  }
                     }
        }

        if(flag == 0)
                cout<<"NO"<<endl;
        else
                cout<<"YES"<<endl;
        t--;
  }

  return 0;
}
