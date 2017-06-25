#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <utility>
#include <ctype>

using namespace std;

typedef unsigned long long int ulli;

int successful_transformation(vector<vector<int> >&grid){

}

int main(){
      int t;
      cin>> t;

      ios_base::sync_with_stdio(false);

      while(t--){
            int n,m;
            cin>>n>>m;

            vector<vector<int> > grid(n, vector<int> (m,0));

            for(int i = 0;i < n;i++){
                    for(int j = 0;j < m;j++){
                              cin>>grid[i][j];
                    }
            }

            int res = successful_transformation(grid);

            cout<<res<<endl;
      }

      return 0;
}
