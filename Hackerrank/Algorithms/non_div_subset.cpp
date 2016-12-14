#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

int main( ){

  long long n;
  cin>>n;
  vector<unsigned long long int> vec(n);

  for(int i = 0;i < n;i++){
               cin>>vec[i];
  }
  int k;
  cin>>k;

  vector<unsigned long long int> vect(n);

  int j = 1;
  vector<unsigned long long int>temp_vec;
  int size = 0;
  for(int count = 0;count < pow(2,n);count++){

                   temp_vec.clear();
                   for(j = 0;j < n;j++){
                            if(count & (1<<j)){
                                  temp_vec.push_back(vec[j]);
                            }

                    }

                   int flag = 0;

                   for(int i = 0;i < temp_vec.size();i++){
                          for(int m = i;i < temp_vec.size();m++){

                                       if((temp_vec[i] + temp_vec[m])% == 0){
                                                    flag = 1;
                                                    break;
                                       }

                          }
                   }

                   if(flag){
                        continue;
                   }
                   else{
                      if(temp_vec.size() > max){
                                  min = temp_vec.size();
                                  cout<<min;
                      }
                   }

  }


  return 0;
}
