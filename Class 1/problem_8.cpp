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
            s[i]='g';
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


        else if(s[i] == 'a')
            s[i]='A';
        else if(s[i] == 'b')
            s[i]='B';
        else if(s[i] == 'c')
            s[i]='C';
        else if(s[i] == 'd')
            s[i]='D';
        else if(s[i] == 'e')
            s[i]='E';
        else if(s[i] == 'f')
            s[i]='F';
        else if(s[i] == 'g')
            s[i]='G';
        else if(s[i] == 'h')
            s[i]='H';
        else if(s[i] == 'i')
            s[i]='I';
        else if(s[i] == 'j')
            s[i]='J';
        else if(s[i] == 'k')
            s[i]='K';
        else if(s[i] == 'l')
            s[i]='L';
        else if(s[i] == 'm')
            s[i]='M';
        else if(s[i] == 'n')
            s[i]='N';
        else if(s[i] == 'o')
            s[i]='O';
        else if(s[i] == 'p')
            s[i]='P';
        else if(s[i] == 'q')
            s[i]='Q';
        else if(s[i] == 'r')
            s[i]='R';
        else if(s[i] == 's')
            s[i]='S';
        else if(s[i] == 't')
            s[i]='T';
        else if(s[i] == 'u')
            s[i]='U';
        else if(s[i] == 'v')
            s[i]='V';
        else if(s[i] == 'w')
            s[i]='W';
        else if(s[i] == 'x')
            s[i]='X';
        else if(s[i] == 'y')
            s[i]='Y';
        else if(s[i] == 'z')
            s[i]='Z';
        else s[i]=s[i];
    }
    for (int i = 0; i <n ; ++i) {
        cout<<s[i];
    }

    return 0;
}
