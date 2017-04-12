#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <cstdlib>

using namespace std;

int main(){

    int g;
    cin>>g;

    while(g > 0){
            int n;
            cin>>n;

            vector<int> a(n);

            for(int i = 0;i < n;i++){
                          cin>>a[i];
            }

            int pcount = 0;

            for(int i = 1;i < n-1;i++){
                         if(a[i-1] == 0 && a[i+1] == 0){
                                a[i] = 0;
                         }
            }

            for(int i = 1;i < n-1;i++){
                         if(a[i-1] == 0 && a[i+1] == 0){
                                pcount++;
                         }
            }

            if(pcount%2 == 0){
                  cout<<"Bob"<<endl;
            }
            else{
                  cout<<"Alice"<<endl;
            }

            g--;
    }
    return 0;
}
