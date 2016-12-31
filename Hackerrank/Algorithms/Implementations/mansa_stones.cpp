#include <iostream>
#include <cstdlib>
#include <math.h>
#include <vector>
#include <algorithm>

typedef unsigned long long int ulli;

using namespace std;

vector<int> myvec;

ulli if_duplicate_exist(int n){

          ulli count = 0,pos = 0;
          for(ulli i = 0;i < myvec.size();i++){
                        if(myvec[i] == n){
                                count++;
                        }
          }
          if(count > 1){
              return count;
          }
          else
              return 0;


}
void find_last_stone(int val,int n,int a,int b){

          if(n == 0){
              return;
          }

          else{
            if(n == 1){
                myvec.push_back(val);
            }
              int temp1 = val + a;
              find_last_stone(temp1,n-1,a,b);
              int temp2 = val + b;
              find_last_stone(temp2,n-1,a,b);
          }

}

int main( ){

    int t;
    int n,a,b;
    
    cin>>t;
    for(int i = 0;i < t;i++){
                 myvec.clear();
                 cin>>n>>a>>b;
                // arr = (int*)malloc(sizeof(int)*(pow(2,n-1)));
                int val = 0;
                 find_last_stone(val,n,a,b);
                 ulli pos = 0;

                 sort(myvec.begin(),myvec.end());
                 for(ulli i = 0;i < myvec.size();i++){

                              pos = if_duplicate_exist(myvec[i]);
                              if(pos){

                                        cout<<myvec[i]<<" ";
                                        i += pos-1;
                              }
                              else{
                                    cout<<myvec[i]<<" ";
                              }
                 }

                 cout<<endl;



    }
}
