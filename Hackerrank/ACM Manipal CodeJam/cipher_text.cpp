#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int Q;
    cin>>Q;
    while(Q>0){
        int N,K;
        cin>>N>>K;
        string s;
        int val = 0;
        int flag=0;
        for(int i=1;i<=K;i++)
            if(i%2==1)
                val += 1;
            else
                val += 2;
        if(val == N){
            flag=1;
            for(int i=1;i<=K;i++){
                if(i%2==1)
                    s+=char(i+96);
                else{
                    s+=char(i+96);
                    s+=char(i+96);
                }
            }
            cout<<s<<endl;
        }

        else if (val<N ){
            //cout<<val<<endl;
            for(int i=1;i<=K;i++){
                if(i%2==1)
                    s+=char(i+96);
                else{
                    s+=char(i+96);
                    s+=char(i+96);
                }
            }

            if((N-val)%2==0){
                for(int i=1;i<=N-val;i++)
                    cout<<'a';
                cout<<s<<endl;
                flag=1;
            }
            else
                cout<<"No such string."<<endl;
        }
        else
            cout<<"No such string."<<endl;

        Q--;
    }
    return 0;
}
