#include <bits/stdc++.h>
//Method02 (Abir):
//Array1{4 256 2 4 3 3 5}
//Array2[257]{0..........0}
//
//n = Max(Array1)
//Declare and initialise Array2 of length n+1 and 0
//Make an array of the Maximum value of Array1
//For (i=0 to n in Array 1)
//if(Array2[Array1[i]] == 0)
//Print Array Array1[i]
//Array2[Array1[i]]=1
//
//4 256 2 _ 3 _ 5

using namespace std;
int main(){
    int arr[7]={4, 256, 2, 4, 3, 3, 5};
    int maxNumber= sizeof(arr)/ sizeof(arr[0])+1;
    int tempArr[maxNumber];
    for (int i = 0; i < maxNumber; ++i) {
        tempArr[i]=0;
    }
    for (int i = 0; i < maxNumber; ++i) {
        if(tempArr[arr[i]] == 0){
            cout<<arr[i]<<" ";
            tempArr[arr[i]]= 1;
        }
    }
    return 0;
}
