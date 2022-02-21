#include <bits/stdc++.h>
using namespace std;
int main() {
    int x,n;
    double sum = 0;
    cout<<"Your input capacity: ";
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cout<<"Number no-"<<i+1<<": ";
        cin>>x;
        sum+=x;
    }
    cout<<"Average: "<<fixed<<setprecision(2)<<sum/n;
    return 0;

}
