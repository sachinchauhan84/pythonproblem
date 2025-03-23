#include<iostream>
using namespace std;

int main(){
    int row , col , n = 4;
    
    for(int row=1;row<=n;row++)
    {
        cout<<" ";
        for(int col=1;col<=n;col++)
        {
            cout<<"1"<<" ";
        }
        cout<<endl;
    }
    return 0;
}