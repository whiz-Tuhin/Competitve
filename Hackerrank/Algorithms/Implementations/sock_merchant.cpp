#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>


using namespace std;

int main( ){


  int n;
  cin>>n;
  vector<int>myvec(n);

  for(int i = 0;i < n;i++){
               cin>>myvec[i];
  }

  sort(myvec.begin(),myvec.end());

  int pairs = 0,count = 0;

  for(int i = 0;i < n; ){
        count = 0;
        for(int j = i;j < n;j++){
                if(myvec[i] == myvec[j]){
                    count++;
                }
        }
        if(count%2 == 0){
            pairs = pairs + count/2;
        }
        if(count%2 == 1){
            pairs = pairs + (count - 1)/2;
        }

        i = i+count;
  }

  cout<<pairs;


  return 0;
}
