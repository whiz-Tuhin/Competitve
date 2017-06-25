#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <utility>


using namespace std;

typedef unsigned long long int ulli;

int main(){

    ios_base::sync_with_stdio(false);

    int t;
    cin>>t;

    while(t--){
          int n;
          cin>>n;
          vector<string> grid(2);

          int count_s = 0;
          for(int i = 0; i < 2;i++){
                string s;
                cin>>s;
                grid.push_back(s);
          }

          int h = 0,v = 0;
          for(int i = 0;i < n;i++){
                  if(grid[0][i] == '*' && grid[1][i] == '*'){
                        h++;
                        break;
                  }
          }

          for(int i = 0;i < n-1;i++){
                  if((grid[0][i] == '*' && grid[0][i+1] == '*') || (grid[1][i] == '*' && grid[1][i+1] == '*') ||
                      (grid[0][i] == '*' && grid[1][i+1] == '*') || (grid[1][i] == '*' && grid[0][i+1] == '*')){
                          v++;
                      }

          }

          cout<<(h+v)<<endl;
    }

    return 0;
}
