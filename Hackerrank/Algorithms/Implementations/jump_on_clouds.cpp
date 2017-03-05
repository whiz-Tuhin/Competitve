#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>

using namespace std;
int n;
//always pass address of vector as a parameter
int min_jmp(vector<int> &c,int i){
    static int res;

    if(i+2 <= n && c[i+2] == 0 && i != n-1){
        res++;
        min_jmp(c,i+2);
    }
    else if (i+2 <= n && c[i+1] == 0){
        res++;
        min_jmp(c,i+1);
    }
    return res;

}
int main(){


    cin>>n;

    vector<int> c(n);
    for(int i = 0;i < n;i++){
                 cin>>c[i];
    }

    int jmp = 0;
    jmp = min_jmp(c,0);
    cout<<jmp;
    return 0;
}
