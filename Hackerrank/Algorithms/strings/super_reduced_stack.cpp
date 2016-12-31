#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <vector>

using namespace std;

int main( ){

  string s;
  cin>>s;

  vector<char>stack;

  for(int i = 0;i < s.length();i++){

               if(stack.size() == 0 || s[i] != stack.back()){
                          stack.push_back(s[i]);
                          cout<<"Returning the current top"<<endl;
                          cout<<stack.back()<<" "<<endl;
               }

                else{
                    cout<<"Inside the else popping out the top"<<endl;
                          cout<<stack.back()<<" "<<endl;
                          stack.pop_back();
                }
  }

  if(stack.size() == 0){
            cout<<"Empty String"<<endl;
  }
  else{
        for(int i = 0;i < stack.size();i++)
                      cout<<stack[i];
  }





  return 0;
}
