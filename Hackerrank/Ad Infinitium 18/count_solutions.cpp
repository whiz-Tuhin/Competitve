#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll countSolutions(ll a, ll b, ll c, ll d){

    ll count = 0;

    for(ll i = 1;i <= c;i++){
               double D = (b*b - (4*(i*i - a*i)));
               double S = (double)sqrt(D);
               double y1 = (b + S)/2.0;
               double y2 = (b - S)/2.0;

               if(S < 0){
                    continue;
               }
               if(S == 0){
                    if(y1>=1 && y1<=d){
                            count++;
                    }
               }
               else{
                    if(y1 - (int)y1 == 0 && (y1>=1 && y1<=d)){
                            count++;
                    }
                    if(y2 - (int)y2 == 0 && (y2>=1 && y2<=d)){
                            count++;
                    }
               }
    }
    return count;

}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        ll a;
        ll b;
        ll c;
        ll d;
        cin >> a >> b >> c >> d;
        ll result = countSolutions(a,b, c, d);
        cout << result << endl;
    }
    return 0;
}
