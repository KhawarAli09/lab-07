#include<iostream>
using namespace std;
int main()
{
    int a[7];
    int counter=0;
    for(int i=0;i<7;i++)
    {
        cout<<"Enter a number of array :";
        cin>>a[i];
        if(a[i]%5==0){
           counter++;
            cout<<counter; 
        }
    }
    cout<<counter;
}