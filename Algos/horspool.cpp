#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>

#define MAX 500

#define endl '\n'

using namespace std;

int shifttable[MAX];

void shifttablefunc(char pattern[]){

      int m = strlen(pattern);

      for(int i = 0;i < MAX;i++){
            shifttable[i] = m;
      }

      for(int j = 0;j < m-1;j++){
            shifttable[pattern[j]] = m - j - 1;
      }
}

int horsepool(char src[ ],char pattern[ ]){

        int n = strlen(src);
        int m = strlen(pattern);

        cout<<"*** "<<n<<" "<<m<<"***"<<'\n';
        int k = 0;

        int i = m - 1;

        while(i < n){

                  k = 0;
                  while((k < m) && (pattern[m - 1 - k] == src[i - k])){
                      k++;
                  }

                  if(k == m)
                      return i-m+1;
                  else
                      i = i + shifttable[src[i]];   //calculated from the shifttable
        }

  return -1;
}


int main( ){

        char src[100],pattern[100];
        //int pos;

        cout<<"Enter text in which pattern is to be searched : ";
        gets(src);

        cout<<"Enter the pattern to be matched : ";
        gets(pattern);

        shifttablefunc(pattern);

        int pos = horsepool(src,pattern);

        if(pos > 0)
            cout<<"Pattern was found in the string at position : "<<pos+1<<'\n';
        else
            cout<<"Pattern was not found in the string "<<'\n';

    return 0;

}
