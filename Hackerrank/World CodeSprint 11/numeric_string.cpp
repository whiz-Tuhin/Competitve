#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <utility>
#include <bitset>

using namespace std;
typedef unsigned long long int ulli;

int getMagicNumber(string s, int k, int b, int m){
    vector<string> substring;
    ulli sum = 0;
    for(int i = 0;i <= s.size()-k;i++){

            string temp = s.substr(i,k);
            substring.push_back(temp);
            string::size_type sz;
            ulli temp2 = stoi(temp,&sz,b);
            sum += (temp2%m);

    }

    //
    // for(int i = 0;i < substring.size();i++){
    //         string::size_type sz;
    //         ulli temp = stoi(substring[i],&sz,b);
    //         sum += (temp%m);
    // }


    return sum;


}

int main() {
    string s;
    cin >> s;
    int k;
    int b;
    int m;
    cin >> k >> b >> m;
    int result = getMagicNumber(s, k, b, m);
    cout << result << endl;
    return 0;
}
