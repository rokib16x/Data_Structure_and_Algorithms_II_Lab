#include <bits/stdc++.h>
using namespace std;
int main() {
    char input;
    while (true){
        cout<<"Please Enter: ";
        cin>>input;
        if(input=='A') {
            cout<<"Accepted";
            break;
        } else
            cout<<"Please try again"<<endl;
        //For Buffer Input
        cin.seekg(0,ios::end);
        cin.clear();
    }
    return 0;

}
