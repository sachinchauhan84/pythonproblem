#include<iostream>
using namespace std;

int main(){
    int row , col , n;
    cout<<"Enter the value :";
    cin>>n;
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=n;col++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}