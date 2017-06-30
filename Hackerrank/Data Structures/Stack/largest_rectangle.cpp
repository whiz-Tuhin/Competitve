#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int n;
    cin>>n;
    
    vector<int> b(n);
    
    for(int i = 0;i < n;i++)
        cin>>b[i];
    
    stack<int> s;
    
    int i = 0;
    int area = 0;
    int max_area = -1;
    
    while(i < n){
        
        if(s.empty() || b[s.top()] <= b[i]){
            s.push(i++);
        }
        else{
            int t = s.top();
            s.pop();
            
            int width;
            if(s.empty()){
                width = i;
            } else {
                width = i - s.top() - 1;
            }
            
            area = b[t]*(width);
            
            if(area > max_area){
                max_area = area;
            }
        }
    }
    
    while(!s.empty()){
        int t = s.top();
        s.pop();
        
        int width;
        if(s.empty()){
            width = i;
        } else {
            width = i - s.top() - 1;
        }
        
        area = b[t]*(width);
        if(area > max_area){
            max_area = area;
        }
    }
    
    cout<<max_area<<endl;
    
    return 0;
}
