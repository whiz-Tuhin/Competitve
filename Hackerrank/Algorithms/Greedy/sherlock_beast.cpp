#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int t;
    cin >> t;

    while(t-- > 0){
           int n;
           cin>>n;
           int max_3 = -1,max_5 = -1;

           if(n == 1 || n == 2){
                cout<<"-1"<<endl;
                continue;
           }
           int temp = n;
           for(int i = 1;i <= n;i++){
                  if(i%3 == 0 && i > max_5 && i < n/2){
                          max_5 = i;
                  }
                  if(temp%5 == 0 && temp > max_3 && i > n/2){
                          max_3 = temp;
                          temp = temp - i; 
                  }
           }

           for(int i = 0;i < max_5;i++){
                    cout<<"5";
           }
           for(int i = 0;i < max_3;i++){
                    cout<<"3";
           }
           cout<<endl;

    }
    return 0;
}
