#include <bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Insert Your String: "<<endl;
    string s;
    getline(cin,s);
    unsigned long int n = s.length()+1;
    for (int i = 0; i < n; ++i) {
                if(s[i] == 'A')
            s[i]='a';
        else if(s[i] == 'B')
            s[i]='b';
        else if(s[i] == 'C')
            s[i]='c';
        else if(s[i] == 'D')
            s[i]='d';
        else if(s[i] == 'E')
            s[i]='e';
        else if(s[i] == 'F')
            s[i]='f';
        else if(s[i] == 'G')
            s[i]='G';
        else if(s[i] == 'H')
            s[i]='h';
        else if(s[i] == 'I')
            s[i]='i';
        else if(s[i] == 'J')
            s[i]='j';
        else if(s[i] == 'K')
            s[i]='k';
        else if(s[i] == 'L')
            s[i]='l';
        else if(s[i] == 'M')
            s[i]='m';
        else if(s[i] == 'N')
            s[i]='n';
        else if(s[i] == 'O')
            s[i]='o';
        else if(s[i] == 'P')
            s[i]='p';
        else if(s[i] == 'Q')
            s[i]='q';
        else if(s[i] == 'R')
            s[i]='r';
        else if(s[i] == 'S')
            s[i]='s';
        else if(s[i] == 'T')
            s[i]='t';
        else if(s[i] == 'U')
            s[i]='u';
        else if(s[i] == 'V')
            s[i]='v';
        else if(s[i] == 'W')
            s[i]='w';
        else if(s[i] == 'X')
            s[i]='x';
        else if(s[i] == 'Y')
            s[i]='y';
        else if(s[i] == 'Z')
            s[i]='z';
            else s[i]=s[i];
    }

    for (int i = 0; i < n; ++i) {
        if(s[i]!=' ')
            cout<<s[i];
    }

    return 0;
}
