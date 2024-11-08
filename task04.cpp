#include<iostream>
using namespace std;
int main()
{
    int a[10];
    for(int i=0;i<10;i++)
    {
        cout<<"Enter a numbers :";
        cin>>a[i];
    }
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=n-1;i>=0;i--)
    {
        cout<<a[i]<<"\t";
    }
}
