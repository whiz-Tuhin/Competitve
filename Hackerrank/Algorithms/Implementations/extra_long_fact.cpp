/*
Example:

arr[1]=3
arr[0]=6

We need to multiply arr by 5. We first multiply 6 by 5.
6*5=30, 30 % 10 = 0, 30/10=3;
arr[0]=0;
carry=3.


We then multiply arr[1] by 5.
prod = arr[1]*5 + carry
prod = 3*5+3=18
arr[1] = prod%10 = 8
carry= prod/10 = 1

Propogating the carry
arr[2]=1

arr[2]=1, arr[1]=8, arr[0]=0
*/
#include <vector>
#include <iostream>

using namespace std;

int main() {
    int val;
    int carry = 0;
    cin >> val;
    vector <int> arr(200, 0);
    arr[0] = 1; //Initial product = 1

    int k = 0; //Current size of the number stored in arr

    for(int i = 1; i <= val; i++) {
        for(int j = 0;j <= k; j++) {
            arr[j] = arr[j] * i + carry;
            carry = arr[j] / 10;
            arr[j] = arr[j] % 10;
        }
        while(carry) { //Propogate the remaining carry to higher order digits
            k++;
            arr[k] = carry % 10;
            carry /= 10;
        }
    }
    for(int i = k; i >= 0; i--) {
        cout << arr[i];
    }
    cout << endl;
    return 0;
}
