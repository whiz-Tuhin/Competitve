#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int main( ){

  int n;
  cin>>n;

  char map[n][n];

  for(int i = 0;i < n;i++){
               for(int j = 0;j < n;j++){
                            cin>>map[i][j];
               }
  }

  for(int i = 1;i <= n-2;i++){
               for(int j = 1;j <= n-2;j++){
                                if(map[i][j] > map[i][j+1]){
                                        if(map[i][j] > map[i][j-1]){
                                                      if(map[i][j] > map[i-1][j]){
                                                                      if(map[i][j] > map[i+1][j]){
                                                                                      map[i][j] = 'X';
                                                                      }
                                                      }
                                        }
                                }
                        }
               }



  for(int i = 0;i < n;i++){
               for(int j = 0;j < n;j++){
                            cout<<map[i][j];
               }
               cout<<endl;
  }


  return 0;
}
