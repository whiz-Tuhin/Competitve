#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;
const int MAX = 1e4 + 5;
int id[MAX], nodes, edges;
pair <long long,pair<pair<int , int> , pair<int, int> > > p[MAX];

void initialize()
{
    for(int i = 0;i < MAX;++i)
        id[i] = i;
}

int root(int x)
{
    while(id[x] != x)
    {
        id[x] = id[id[x]];
        x = id[x];
    }
    return x;
}

void union1(int x, int y)
{
    int p = root(x);
    int q = root(y);
    id[p] = id[q];
}

vector<long long> kruskal(pair<long long,pair<pair<int , int>, pair<int, int> > > p[])
{
    int x, y;
    long long minimumCost1 = 0,minimumCost2 = 0;
    int cost1,cost2;
    vector<long long> m;
    for(int i = 0;i < edges;++i)
    {
        // Selecting edges one by one in increasing order from the beginning
        x = p[i].second.second.first;
        y = p[i].second.second.second;
        cost1 = p[i].second.first.first;
        cost2 = p[i].second.first.second;
        // Check if the selected edge is creating a cycle or not
        if(root(x) != root(y))
        {
            minimumCost1 += cost1 ;
            minimumCost2 += cost2;

            cout<<minimumCost1<<minimumCost2<<endl;
            union1(x, y);
        }
    }
    //cout<<minimumCost1<<minimumCost2<<endl;
    m.push_back(minimumCost1);
    m.push_back(minimumCost2);

    // for(int i = 0;i < m.size();i++){
    //               cout<<m[i]<<" ";
    // }
    return m;
}

int main()
{
    int x, y,a,b;
    long long weight, cost;
    initialize();
    cin >> nodes >> edges;
    for(int i = 0;i < edges;++i)
    {
        cin >> x >> y >> a >> b;
        weight = a + b;
        p[i] = make_pair(weight,make_pair(make_pair(x,y),make_pair(x, y)));
    }
    // Sort the edges in the ascending order
    sort(p, p + edges);
    vector<long long> minimumCost;
    minimumCost = kruskal(p);

    char f[3];

    f[0] = (char)minimumCost[0];
    f[1] = '/';
    f[2] = (char)minimumCost[1];

    cout<<f<<endl;

    return 0;
}
