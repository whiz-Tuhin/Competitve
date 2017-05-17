#include <bits/stdc++.h>

using namespace std;

string generate(){
        string s;
        s.push_back('0');

        while(s.length() <= 1000){
                string temp = s;
                for(int i = 0;i < temp.length();i++){
                            if(temp[i] == '0'){
                                    temp[i] = '1';
                            }
                            else{
                                    temp[i] = '0';
                            }
                }

                s.append(temp);
        }

        return s;
}

int main(){
        int t;
        cin>>t;

        string s = generate();
        for(int i = 0;i < t;i++){
                int q;
                cin>>q;

                cout<<s[q]<<endl;
        }

        return 0;
}
