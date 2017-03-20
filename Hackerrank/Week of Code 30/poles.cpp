#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <cstdlib>

using namespace std;

typedef struct pole{
      int h;
      int w;
}POLE;

int search(vector<int> &pole,int ele){

            for(int i = 0;i < pole.size();i++){
                         if(pole[i].h == ele){
                                return i;
                         }
            }
            return -1;
}


bool cmp_func(POLE i,POLE j){
      return i.w > j.w;
}

int main(){

    int n;
    int k;
    cin>>n>>k;
    if(n == k){
        cout<<0<<endl;
        exit(0);
    }
    vector<POLE> p(n);
    vector<POLE> temp(n);
    for(int i = 0;i < n;i++){
                 cin>>p[i].h>>p[i].w;
                 temp[i].h = p[i].h;
                 temp[i].w = p[i].w;
    }

    sort(temp.begin(),temp.end(),cmp_func);







}
