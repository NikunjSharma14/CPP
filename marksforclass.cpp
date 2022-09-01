//checking marks of a class
#include<iostream>
using namespace std;
int main(){
    int arr[4], marks;
    for (int i=0; i<4; i++)
    cin>>arr[i];
    for (int i=0; i<4; i++)
    {
        if(arr[i]>40)
        cout<<"student is pass\n";
        else
        cout<<"student is fail\n";
    }
    return 0;
}