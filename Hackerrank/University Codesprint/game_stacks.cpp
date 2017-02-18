#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <math.h>

using namespace std;

typedef unsigned long long int ulli;

int main( ){

      int g;
      cin>>g;
      int i;
      for(int i = 0;i < g;i++){

                   int n = 0,m = 0,x = 0;
                   ulli sum = 0;
                   int score = 0;
                   cin>>n>>m>>x;
                   vector<ulli> sum_a(n);

                   for(int i = 0;i < n;i++){
                            int temp;
                            cin>>temp;

                            sum += temp;
                            sum_a[i] = sum;

                            if(sum <= x){
                                    score = i+1;
                                    //cout<<"Score => "<<score<<endl;
                            }
                   }

                   sum = 0;


                   //taking input for stack B now
                   for(int i = 0;i < m;i++){

                                int temp;
                                cin>>temp;
                                sum += temp;

                                //not doing anything for this stack if the sum > x
                                if(sum > x){
                                      continue;
                                }

                                int l = 0,h = n-1,mid = 0;
                                ulli remain = x - sum;

                                while(l <= h){
                                        mid = (l + h)/2;
                                        //cout<<"mid => "<<mid<<endl;
                                        if(sum_a[mid] <= remain){
                                                l = mid+1;
                                        }
                                        else{
                                                h = mid-1;
                                        }
                                }

                                score = max(score,(h+1+i+1));
                                //cout<<"Score => "<<score<<endl;


                   }

              cout<<score<<endl;

      }

      return 0;
}
