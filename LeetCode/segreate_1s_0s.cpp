#include <iostream>

using namespace std;

int main(){

  int n;
  cin>>n;

  int a[n];

  for(int i = 0;i < n;i++){
               cin>>a[i];
  }

  int l = 0;
  int h = n-1;

  while(l < h){

          //cout<<"l = "<<l<<" h = "<<h<<endl;
          if(a[l] == a[h] && a[l] == 1){
                      //cout<<"1"<<endl;
                      h--;
          }
          if(a[l] == a[h] && a[l] == 0){
                      //cout<<"2"<<endl;
                      l++;
          }
          if(a[l] < a[h]){
                      //cout<<"3"<<endl;
                      h--;
                      l++;
          }
          if(a[l] > a[h]){
                      //cout<<"4"<<endl;
                      int temp = a[l];
                      a[l] = a[h];
                      a[h] = temp;
                      h--;
                      l++;
          }


  }

  for(int i = 0;i < n;i++)
               cout<<a[i];

  return 0;


}
