#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;


class Stack{

      private:
          vector<int> stack;

      public:
          bool isempty();
          void push(int ele);
          void pop();
          int peek();
          int getstacksize();
          void printstack();
};

//definitions

bool Stack::isempty(){
        return stack.empty();
}

void Stack::push(int ele){
        stack.push_back(ele);
}

void Stack::pop(){
        // int popped = stack.back();
        stack.pop_back();
        // return popped;
}

int Stack::peek(){
        return stack[stack.size() - 1];
}

int Stack::getstacksize(){
        return stack.size();
}

void Stack::printstack(){
        for(int i = 0;i < stack.size();ci++){
              cout<<stack[i]<<" ";
        }
        cout<<endl;
}

int main(){
      Stack s;

      while(s.getstacksize() <= 10){
            int ele;
            cin>>ele;

            s.push(ele);
            s.printstack();
      }

      while(!s.isempty()){

            // cout<<"popped element = "<<s.pop()<<endl;
            // cout<<"current top = "<<s.peek()<<endl;
            s.pop();
            s.printstack();

      }

      return 0;
}
