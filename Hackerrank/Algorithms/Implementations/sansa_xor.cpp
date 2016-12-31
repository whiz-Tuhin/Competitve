#include <iostream>
#include <string>
#include <fstream>
#include <math.h>

using namespace std;



// long long calculate_xor(long long n,long long arr[ ]){
//
//   long long temp_xor = 0;
//   for(int i = 0;i < n;i++){
//                //cout<<"****";
//                for(int j = i;j < n && (j-i <= n-1);j++){
//                             temp_xor = 0;
//                             for(int k = i;k <= j;k++){
//                                         temp_xor = temp_xor ^ arr[k];
//                                         //cout<<"temp_xor = "<<temp_xor<<endl;
//                             }
//                                 overall_xor ^= temp_xor;
//                                 //cout<<"overall_xor = "<<overall_xor<<endl;
//                                 //cout<<endl;
//                }
//  }
//
//  return overall_xor;
//
// }


int main( ){

  int t;
  long long* arr,n;
  long long overall_xor = 0;
  cin>>t;

  for(int i = 0;i < t;i++){
               overall_xor = 0;
               cin>>n;

               if(n%2 == 0){
                      cout<<0<<endl;
               }
               else{

               arr = (long long*)malloc(sizeof(long long)*n);

               for(int j = 0;j < n;j++){
                            cin>>arr[j];
               }

               //long long res = calculate_xor(n,arr);

               for(int k = 0;k < n;k = k+2){
                            overall_xor ^= arr[k];
               }

               cout<<overall_xor<<endl;
             }

  }
  return 0;
}
