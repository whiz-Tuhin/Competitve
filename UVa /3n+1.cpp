//Problem is based on the collatz conjecture
// where you have a cyclic repition when every number is plugged into the function
/*
f(n) -> {
              n/2     if n is even

              3*n+1   if n is odd

        }
every number converges to 1 when plugged into the above recursive function.

below is a brute force implementation, but a better solution would be to use caching
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int cycle_len = 0;

int collatz_cycle(int i){
    int count = 0;
    while(1){
        count++;
        if(i == 1){
            break;
        }
        else if(i%2 == 0){
              i = i/2;

        }
        else if(i%2 != 0 && i!=1){
              i = 3*i+1;
        }
    }
    return count;
}

int main(){

    int a,b;
    cin>>a>>b;

    int max = -1;
    for(int i = a;i <= b;i++){
            int c = collatz_cycle(i);
            if(c > max){
                max = c;
            }
            cycle_len = 0;
    }
    cout<<a<<" "<<b<<" "<<max<<endl;
    return 0;
}
