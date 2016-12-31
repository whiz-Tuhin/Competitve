#include <iostream>
#include <string>
#include <math.h>
#include <cstdint>
#include <cstdlib>


using namespace std;

int main( ){

  int t;

  cin>>t;

  for(int i = 0;i < t;i++){

            uint64_t l,r;
            cin>>l>>r;

            uint64_t* arr;
            arr = (uint64_t*)malloc(sizeof(uint64_t)*(r+1));

            arr[0] = 0;
            for(int i = 1;i <= r;i++){
                         arr[i] = arr[i-1]^i;
            }

            for(int i = 0;i <= r;i++)
                         cout<<arr[i]<<" ";
            cout<<endl;
            uint64_t res = 0;
            for(int j = l;j <= r;j++){
                res = res^arr[j];
            }

            cout<<res<<endl;
            free(arr);
  }

  return 0;
}
