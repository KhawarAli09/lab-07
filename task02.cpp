#include<iostream>
using namespace std;
int main()
{
    int study_hours=0, study_indx, max_hours ;
    int arr[10]={};
    for(int i=0; i<10;i++)
    {
        cout<<"Enter a number of Hours student study "<<i+1<<" : ";
        cin>>arr[i]; 
        if(arr[i]>max_hours)  
        {
            max_hours=arr[i];
            study_indx=i+1;
        }   
}
cout<<endl;
for(int j=0;j <10;j++)
{
    cout <<"Study hours is :"<<j+1<<"is :"<<arr[j]<<endl;
}
cout<<"the student  study max hours is :"<<max_hours;


}