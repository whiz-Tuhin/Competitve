#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string s;

    cin>>s;

    sort(s.begin(),s.end());

    int flag = 0;
    for(int i = 0;i < s.length();i++){
                if(s[i] == s[i+1]){
                    flag = 1;
                    break;
                }
                else{
                    continue;
                }
    }

    if(flag){
        cout<<"Not unique"<<endl;
    }
    else{
        cout<<"Unique"<<endl;
    }

    return 0;
}
