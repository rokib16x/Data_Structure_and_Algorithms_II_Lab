#include <bits/stdc++.h>
/*
Method03 (osman):
Array1{4 256 2 4 3 3 5}
Array2[]{4}
count=0
for (i=0 to n in Array 1)
if(i==0)
Array2[i]=Array1[i]
count++;
else
for(j=0 to count in Arry2)

if(Array2[j]==Array[i]) break;
else
Array2[i]=Array1[i];
count++;
for ( i=0 to count)
print Array2[i]
Traverse the Array and Print all element except -1
*/


using namespace std;

int main()
{
    int arr[7] = {4, 256, 2, 4, 3, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int tempArr[7];
    tempArr[0]=arr[0];
    int Count = 1; ///count = 0
    for (int i = 1; i < n; i++)
    {
        // cout<< arr[i] <<endl;
        int flag=1;
        for (int j = 0; j < Count; j++)
        {
            // cout<< "\t" << tempArr[j] << endl;
            if(arr[i]== tempArr[j])
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            tempArr[Count]=arr[i];
            Count++;
        }
    }
    for (int i = 0; i < Count; ++i)
    {
        //if(tempArr[i]!=0){
        cout<<tempArr[i]<<" ";
        //}
    }
    return 0;
}
