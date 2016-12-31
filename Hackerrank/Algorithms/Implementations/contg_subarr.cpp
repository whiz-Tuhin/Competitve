#include <iostream>

using namespace std;

int main( ){

  int arr[100],n;
  cin>>n;

  for(int i = 0;i < n;i++)
               cin>>arr[i];

  // for(int counter = 1;counter <= (n*(n+1))/2;counter++){
  for(int i = 0;i < n;i++){
               //cout<<"****";
               for(int j = i;j < n && (j-i <= n-1);j++){
                            for(int k = i;k <= j;k++){
                                         cout<<arr[k];
                            }
                                          cout<<endl;
               }
 }



  return 0;
}
