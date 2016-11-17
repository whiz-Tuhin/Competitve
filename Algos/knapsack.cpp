#include <iostream>
#include <fstream>
#include <string>

#define endl '\n'

using namespace std;


int knapsack(int n,int value[ ],int weight[ ],int W){
    //base condition for program
    if(n == 0 || W == 0)
          return 0;

    //if weight of the nth item is greater then knapsack then exclude it take the rest n-1 for W capacity
    if(weight[n-1] > W)
          return knapsack(n-1,value,weight,W);

    else
          //maximum subsets nth item satisfies then execute for rest n-1 with W - weight[nth item] or n-1 items for W capacity
          return max( value[n-1] + knapsack(n-1,value,weight,W - weight[n-1]) , knapsack(n-1,value,weight,W));
}


int main( ){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int n;

    cout<<"Enter the number of elements <MAX 10> :";
    cin>>n;

    int value[10],weight[10];
    int W;

    cout<<"enter the knapsack capacity : ";
    cin>>W;

    for(int i = 0;i < n;i++){
            cout<<"Enter weight and value of the corresponding item "<<i+1<<":";
            cin>>weight[i]>>value[i];
    }


    int final = knapsack(n,value,weight,W);

    cout<<"The max value obtained which satisfies the knapsack constraint is : "<<final<<'\n';


  return 0;
}
