#include <bits/stdc++.h>

//Array1{4 256 2 4 3 3 5}
//Array2[257]{0..........0}
//
//n = Max(Array1)
//Declare and initialise Array2 of length n+1 and 0
//Make an array of the Maximum value of Array1
//For (i=0 to n in Array 1)
//tempArr[arr[i]]++

//For (i=0 to n in Array 1)
//if(tempArr[i]!=0)
//print tempArray[i]
//4 256 2 4 3 3 5
//1  1  1 2 1 2 1

using namespace std;
int main(){
    int arr[7]={4, 256, 2, 4, 3, 3, 5};
    int n= sizeof(arr)/ sizeof(arr[0]);
    int tempArraySize= arr[0];
    for (int i = 1; i < n; ++i) {
        if(arr[i]>tempArraySize){
            tempArraySize=arr[i];
        }
    }
    int tempArr[tempArraySize+1];
    for (int i = 0; i < tempArraySize+1; ++i) {
        tempArr[i]=0;
    }
    for (int i = 0; i < n; ++i) {
        tempArr[arr[i]]++;
    }
    for (int i = 0; i < tempArraySize+1; ++i) {
        if(tempArr[i]!=0){
            cout<<i<<" occurs "<<tempArr[i]<<" times"<<endl;
        }
    }
    return 0;
}
