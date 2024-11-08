#include<iostream>
using namespace std;
int main()
{
    int a ;
    cout<<"Enter a number for array size :";
    cin>>a;
    int Array[a];
    
    for(int i=0; i<a;i++)
    {
        cout<<"Enter a number of array :";
        cin>>Array[i];      
}
for(int j=0;j<a;j++)
{
    cout<<Array[j]<<endl;
}
}