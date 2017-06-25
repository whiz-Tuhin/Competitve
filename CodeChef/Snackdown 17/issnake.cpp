#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){

      int t;
      cin>>t;

      while(t--){
              int n;
              cin>>n;

              vector<vector<char> > plate(2,vector<char> (n,0));

              for(int i = 0;i < 2;i++){
                    for(int j = 0;j < n;j++){
                              cin>>plate[i][j];
                    }
              }

              int count = 0;

              for(int i = 0;i < n;i++){
                      if(plate[0][i] == '#' || plate[1][i] == '#'){
                                count++;

                      }
              }

              int row = 0,col = 0;

              //find first occuring #
              // for(int i = 0;i < n;i++){
              //       if(plate[0][i] == '#'){
              //               row = 0;
              //               col = i;
              //               break;
              //       }
              //       if(plate[1][i] == '#'){
              //               row = 1;
              //               col = i;
              //               break;
              //       }
              // }
              int flag = 0;
              for(int i = 0;i < n;i++){
                        //for row 0
                        int ncount = 0;
                        if(plate[0][i] == '#'){

                                if(i == 0){
                                      if(plate[0][i+1] == '#'){
                                              ncount++;
                                  
                                      }
                                      if(plate[1][i] == '#'){
                                              ncount++;

                                      }
                                }
                                else if(i == n-1){
                                      if(plate[0][i-1] == '#'){
                                          ncount++;

                                      }
                                      if(plate[1][i] == '#'){
                                          ncount++;

                                      }

                                }
                                else{
                                      if(plate[0][i] == '#'){
                                          if(plate[0][i-1] == '#')
                                              ncount++;
                                          if(plate[0][i+1] == '#')
                                              ncount++;
                                          if(plate[1][i] == '#')
                                              ncount++;
                                      }
                                }

                                if(ncount >= 2){
                                      flag = 1;
                                      break;
                                }
                      }

                      if(plate[1][i] == '#'){

                              if(i == 0){
                                    if(plate[1][i+1] == '#'){
                                          ncount++;
                                    }
                                    if(plate[0][i] == '#'){
                                          ncount++;
                                    }
                              }
                              else if(i == n-1){
                                    if(plate[1][i-1] == '#'){
                                          ncount++;
                                    }
                                    if(plate[0][i] == '#'){
                                          ncount++;
                                    }

                              }
                              else{
                                    if(plate[1][i] == '#'){
                                        if(plate[1][i-1] == '#')
                                            ncount++;
                                        if(plate[1][i+1] == '#')
                                            ncount++;
                                        if(plate[0][i] == '#')
                                            ncount++;
                              }
                        }

                        if(ncount >= 2){
                              flag = 1;
                              break;
                        }
                      }
              }

              if(flag){
                    cout<<"no"<<endl;
              }
              else{
                    cout<<"yes"<<endl;
              }
      }

      return 0;
}
