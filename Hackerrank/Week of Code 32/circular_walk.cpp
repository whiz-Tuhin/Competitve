#include <bits/stdc++.h>

using namespace std;

vector<int> r;
vector<int> clw;
vector<int> aclw;

int a,b;
void generate_r(int r_p,int n,int g,int seed,int p){
            if(r.size() == n){
                    return;
            }
            else{
               int r_n = ((r_p*g) + seed)%p;
               r.push_back(r_n);
               generate_r(r_n,n,g,seed,p);
            }

}

void alcw_walk(int s,int t){

      for()
}


int circularWalk(int s, int t, int g, int seed, int p){
    // Complete this function

    //clw;

    return min(a,b)+1;
}

int main() {
    int n;
    int s;
    int t;
    cin >> n >> s >> t;
    int r_0;
    int g;
    int seed;
    int p;
    cin >> r_0 >> g >> seed >> p;
    r.push_back(r_0);
    generate_r(r_0,n,g,seed,p);
    int result = circularWalk( s, t, g, seed, p);
    cout << result << endl;
    return 0;
}
