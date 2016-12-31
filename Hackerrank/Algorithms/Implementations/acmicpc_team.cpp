//Implement using the string class

#include <iostream>
#include <string>
#include <math.h>
#include <string>
#include <algorithm>
#include <cstdio>
#include <bitset>

using namespace std;

int main( ){

  int n,m = 0;
  cin>>n>>m;
  // string topic[100];
  //
  // for(int i = 0;i < n;i++){
  //              cin>>topic[i];
  // }
  //
  // string res = topic[0] | topic[2];
  // cout<<res<<endl;

  bitset<501>topic[501];

  for(int i = 0;i < n;i++){
               cin>>topic[i];
  }

  bitset<501>temp;

  int count = 0;

  int max = 0,cnt = 0,total= 0,t;
  for(int i = 0;i < n-1;i++){
               for(int j = i+1;j < n;j++){
                              for(int k = 0;k < m;k++)
                                           temp[k] = (topic[i])[k] | (topic[j])[k];

                            //cout<<"Temp = "<<temp<<endl;
                            cnt = temp.count();
                            //cout<<"Temp count = "<<cnt<<endl;
                            if(cnt > max){
                                max = cnt;
                                total = 1;
                                //cout<<"Max = "<<max<<endl;
                            }
                            else if(cnt == max){
                                  total = total + 1;
                            }

                          }

              }
cout<<max<<endl;
cout<<total;

  return 0;
}
