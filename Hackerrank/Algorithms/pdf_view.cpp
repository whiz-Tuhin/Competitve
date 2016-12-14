#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

int main( ){

  map<char,int> mymap;
  map<char,int>::iterator it;

  int val[26];
  for(int i = 0;i < 26;i++){
               cin>>val[i];
  }

  char letter[ ] = "abcdefghijklmnopqrstuvwxyz";

  //initialize the map
  for(int i = 0;i < 26;i++)
               mymap[letter[i]] = val[i];

  char word[10];

  cin>>word;

  int max = 0;
  for(int i = 0;i < strlen(word);i++){
               int temp = mymap.find(word[i])->second;

               if(temp > max)
                        max = temp;
  }
  int w = strlen(word);
  cout<<w*max;

  return 0;
}
