#include <iostream>
#include <vector>
#include <map>
#include <iomanip>

#define M_PI  3.1415926535

using namespace std;

void calculate(map<long double,int> &mp,int k, int v,vector<int> vp){
    // cout<<"VP "<<v<<endl;
    // for(int i=0;i<vp.size();i++)
    //     cout<<vp[i]<<" ";
    // cout<<endl;
    if(v==k){
        long double ans=0;
        for(int i=0;i<vp.size();i++){
            ans += vp[i] * vp[i];
        }
        ans *= M_PI;
        if(mp.find(ans)!=mp.end()){
            mp[ans]++;
        }
        else
            mp.insert(pair<long double,int>(ans,1));
        // cout<<"YO"<<endl;
        vp.clear();
    }
    else{
        vector<int> temp;
        temp.clear();
        for(int i=0;i<vp.size();i++){
            temp.clear();
            temp.push_back(vp[i]+vp[(i+1)%vp.size()]);
            int j = (i+2)%vp.size();
            while(j!=i && j!=i+1){
                temp.push_back(vp[j]);
                j = (j+1)%vp.size();
                if(j==i)
                    break;
            }
            // cout<<"HI"<<endl;
            calculate(mp,k,v+1,temp);
        }
    }
}

int main(){
    int n,k;
    //cout<<"Enter n and k"<<endl;
    cin>>n>>k;
    //cout<<"Enter the array of radii"<<endl;
    vector<int> vp(n);
    for(int i=0;i<n;i++)
        cin>>vp[i];
    map <long double,int> mp;
    calculate(mp,k,0,vp);
    map <long double,int> ::iterator it;
    int sz = 0;
    long double fans = 0;
    for(it=mp.begin();it!=mp.end();it++){
        fans += it->first * it->second;
        sz += it->second;
    }
    fans /= sz;
    cout<<setprecision(10)<<fans<<" "<<endl;
    return 0;
}
