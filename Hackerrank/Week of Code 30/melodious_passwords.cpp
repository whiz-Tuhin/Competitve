#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

void gen(int n,int index,int check,char arr[]){

    if(n == index){
          arr[index] = '\0';
          cout<<arr<<endl;
          return;
    }

    else if(check == 0){
        char vowels[5] = {'a','e','i','o','u'};
        for(int i = 0;i < 5;i++){
              arr[index] = vowels[i];
              gen(n,index+1,1,arr);
        }
    }
    else if(check == 1){
        for(int i = 98;i <= 122;i++){
                if(char(i) == 'a' || char(i) == 'e' || char(i) == 'i' || char(i) == 'o' || char(i) == 'u' || char(i) == 'y'){
                    continue;
                }
                arr[index] = char(i);
                gen(n,index+1,0,arr);
        }
    }
}

int main(){
    int n;
    cin >> n;
    char arr[n];
    gen(n,0,1,arr);
    gen(n,0,0,arr);
    return 0;
}
