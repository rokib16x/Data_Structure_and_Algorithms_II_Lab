#include <bits/stdc++.h>

//method 1
//4 : 256 2 4(M)| -1 replace
//256: 2 -1 3 3 5
//2: -1 3 3 5
//-1: skip | 3 3 5
//3: 3 (M)| -1 replace
//-1: skip | 5
//5 : using this algorithm
//O(n*2)
using namespace std;
int main(){
    int arr[7]={4, 256, 2, 4, 3, 3, 5};
    int arrLength= sizeof(arr)/ sizeof(arr[0]);// length of an array
    for (int i = 0; i < arrLength; ++i) {
        for (int j = i+1; j < arrLength; ++j) {
            if (arr[i]==arr[j]){
                arr[j]= -16;
            }
        }
    }

    for (int i = 0; i < arrLength; ++i) {
        if(arr[i]!= -16){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}
