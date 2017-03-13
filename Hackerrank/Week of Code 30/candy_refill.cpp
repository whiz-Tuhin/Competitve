#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <cstdlib>

using namespace std;

int main(){
    int n;
    int t;
    cin >> n >> t;
    vector<int> c(t);
    for(int i = 0; i < t; i++){
       cin >> c[i];
    }
    int b = n;
    int total = 0;

    for(int time = 0;time <= t;time++){
               if(time == 0){
                   continue;
               }
               b = b-c[time-1];

               if(b < 5 && time < t){
                   total += (n-b);
                   b += (n - b);
               }
    }
    cout<<total<<endl;

    return 0;
}
