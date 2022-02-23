#include <bits/stdc++.h>


using namespace std;
int n;

void factorial(int x){
    int fact=1,i =1;
    cout<<x<<"! = ";
    while(i<=x){
        if(x>i){
            cout<<i<<" x ";
        }
        else
            cout<<i;
        fact=fact*i;
        i++;
    }
    cout<<" = "<< fact<<endl;
}
void calc_factorial(int a,int b){
    n=(b-a)+1;
    int arr[n];
    int arraySize=0;

    for (int i = a; i <= b; ++i) {
        arr[arraySize]=i;
        arraySize++;
    }

    for (int i = 0; i < arraySize; ++i) {
        factorial(arr[i]);
    }
}
int main(){
    calc_factorial(2,4);
    return 0;
}
