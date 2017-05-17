#include <bits/stdc++.h>

using namespace std;

int getMaxMonsters(int n, int hit, int t, vector < int > &h){
        sort(h.begin(),h.end());

        int i = 0;
        int count = 0;

        for(int i = 0;i < h.size();i++){
                    if(t == 0){
                          break;
                    }
                    if(t < 0){
                          count--;
                          break;
                    }
                    int k = ceil((float)h[i]/(float)hit);
                    t = t - k;
                    count++;
        }
        return count;
}

int main() {
    int n;
    int hit;
    int t;
    cin >> n >> hit >> t;
    vector<int> h(n);
    for(int h_i = 0; h_i < n; h_i++){
       cin >> h[h_i];
    }

    int result = getMaxMonsters(n, hit, t, h);
    cout << result << endl;
    return 0;
}
