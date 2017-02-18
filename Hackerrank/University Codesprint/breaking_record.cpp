#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> score(n);

    int min = 0,max = 0,min_count =0,max_count = 0;
    for(int i = 0;i < n;i++){
                 cin>>score[i];

                 if(i == 0){
                        min = score[i];
                        max = score[i];

                        continue;
                 }

                 if(score[i] < min && i!=0){
                        min_count++;
                        min = score[i];
                 }

                 if(score[i] > max && i!=0){
                        max_count++;
                        max = score[i];
                 }
    }

    cout<<max_count<<" "<<min_count<<endl;
    return 0;
}
