#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

bool cmpfunction(int i,int j){
         return i > j;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int q;
    cin>>q;

    for(int i = 0;i < q;i++){

                 string s;
                 cin>>s;
                 int arr[26] = {0};

                 for(int j = 0;j < s.length();j++){
                              arr[int(s[j]) - 97]++;
                 }

                 int temp = 0;
                 int flag = 0;

                 sort(arr,arr+26,cmpfunction);

                 int a = arr[0];

                 int k =1;int sum = 0;
                 while(arr[k] != 0){
                         sum += arr[k];
                         k++;
                 }
                 if (a == sum){
                         cout<<"YES"<<endl;
                 }
                 else{
                         cout<<"NO"<<endl;
                 }


    }
    return 0;
}
