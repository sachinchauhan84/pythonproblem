#include<iostream>
using namespace std;

int main(){
    int row , col , n = 6;
    
    for(int row=1;row<=n;row++)
    {
        cout<<" ";
        for(int col=1;col<=n;col++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}