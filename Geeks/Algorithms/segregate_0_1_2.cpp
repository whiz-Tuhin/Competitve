//Things that i learnt
/*
    here in such question the major trick is the part where you need to figure out how to
    move these pointers...as said in the article -> first you figure out the brute force method to do it
    after you figure that out you see at each iteration how the loop works and then erplace the redundant iterations by
    pointer manipulations
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void segregate(vector<int> &A){
    int l = 0;
    int m = 0;
    int h = A.size()-1;

    while(m <= h){
            if(A[m] == 0){
                   swap(A[l++],A[m++]);
            }
            else if(A[m] == 1){
                    m++;
            }
            else{
                    swap(A[m],A[h--]);
            }
    }
}

int main(){

    int n;
    cin>>n;
    vector<int> A(n);

    for(int i = 0;i < n;i++){
            cin>>A[i];
    }

    segregate(A);

    for(int i = 0;i < n;i++){
          cout<<A[i]<<" ";
    }
    cout<<endl;


    return 0;
}
