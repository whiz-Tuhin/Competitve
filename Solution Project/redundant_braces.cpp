
#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

char stacktop(vector<char> &stack){
    return stack[stack.size()-1];
}

int redundant_braces(string s){

    vector<char> stack;

    for(int i = 0;i < s.length();i++){
        if(s[i] == ')'){

            int count = 0;

            while(stacktop(stack) != '('){
                stack.pop_back();
                count++;
            }

            if(count < 2){
                return 1;
            }
        }
    }

    return 0;
}


int main(){

    string s;
    cin>>s;


    cout<<"String = "<<s<<endl;

    if(redundant_braces(s))
        cout<<"RB exists"<<endl;
    else
        cout<<"RB doesn't exist"<<endl;

    return 0;
}
