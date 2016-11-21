#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <math.h>

#define endl '\n'

using namespace std;

typedef struct query{
    long long l;
    long long r;
    long long x;
    int type;
}Query;

long long xth_fibonacci(long long);
void perform_queries(int,int,Query*,long long*);



// ifstream cin("718C.in");
// ofstream cout("718C.out");


void  perform_queries(int m,int n,Query query[ ],long long arr[ ]){
    for(int i = 0;i < m;i++){

        long long sum = 0;
        switch(query[i].type){

            case 1:
                for(long long j = query[i].l - 1;j <= query[i].r - 1;j++){
                    *(arr + j) = *(arr + j) + query[i].x;
                }
                // cout<<"After Query "<<i<<" array is :"<<'\n';
                // for(int k = 0;k < n;k++)
                //     cout<<" "<<(*(arr + k));

                break;

            case 2:

                //long long a = query[i].l - query[i].r +1;
                //cout<<"The sum of the fibonacci numbers in array index is : "<<a<<'\n';
                for(long long j = query[i].l - 1;j <= query[i].r - 1;j++){
                    sum = sum + xth_fibonacci(*(arr + j));
                }
                sum = sum % (long long)round((pow(10,9) + 7));
                cout<<sum<<'\n';
                break;
        }

    }
}

long long xth_fibonacci(long long x){

    if(x == 1 || x== 2){
        return 1;
    }
    else
        return (xth_fibonacci(x - 1) + xth_fibonacci(x - 2));
}


int main( ){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long m,n;
    long long* arr;

    cin>>n>>m;                       //taking input ( n , m )

    arr = (long long*)malloc(sizeof(long long)*n);

    for(int i = 0;i < n;i++){
        cin>>arr[i];
    }

    Query* query = (Query*)malloc(sizeof(Query)*m);

    for(int i = 0;i < m;i++){

        cin>>query[i].type;

        if(query[i].type == 1){
            cin>>query[i].l;
            cin>>query[i].r;
            cin>>query[i].x;
        }

        else{
            query[i].x = 0;
            cin>>query[i].l;
            cin>>query[i].r;
        }

    }

    //operate on the queries

    perform_queries(m,n,query,arr);


    return 0;
}
