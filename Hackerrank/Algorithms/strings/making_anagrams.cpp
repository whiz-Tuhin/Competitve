  #include <iostream>
  #include <string>
  #include <cstring>
  #include <math.h>

  using namespace std;

  int main(){

    string str1,str2;

    cin>>str1;
    cin>>str2;

    int arr1[26] = {0};

    for(int i = 0;i < str1.length();i++){
                 arr1[str1[i] - 'a']++;
    }
    for(int i = 0;i < str2.length();i++){
                 arr1[str2[i] - 'a']--;
    }
    int count1 = 0,count2 = 0;
    for(int i = 0;i < 26;i++){
                 count1 += abs(arr1[i]);
    }

    cout<<count1<<endl;

    return 0;
  }
