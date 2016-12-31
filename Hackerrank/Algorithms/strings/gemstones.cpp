#include <iostream>
#include <cstring>
#include <string>
#include <math.h>
#include <cstdlib>
#include <vector>

using namespace std;

int main(){

  int n;
  cin>>n;

  vector<string>rock(n);
  int arr[n][26];
  memset(arr,0,sizeof(arr));

  for(int i = 0;i < n;i++){
               cin>>rock[i];
  }

 for(int i = 0;i < n;i++){
              for(int j = 0;j < rock[i].length();j++){
                           arr[i][(int)rock[i][j] - 97]++;
              }
}

int final = 0;
for(int j = 0;j < 26;j++){
             int count = 0;
             for(int i = 0;i < n;i++){
                          if(arr[i][j] > 0){
                                  count++;
                          }
             }
             if(count == n){
                  final++;
             }

}

cout<<final;

  return 0;
}
