#include <bits/stdc++.h>
using namespace std;
void reverseFunc(int arr[],int n){
    int low=0;
    int high=n-1;
    while(low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}
int main(){
    int n;
    cout<<"Array Size: ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cout<<"Input no: ";
        cin>>arr[i];
    }
    cout<<endl;
    reverseFunc(arr,n);
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}
