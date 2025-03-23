#include<iostream>
#include <climits>
using namespace std;

int main(){
    int arr[5]={14,23,11,56,10};
    int first = arr[0];
    for(int i=0;i<5;i++)
    {
        if(arr[i] < first)
        {
            first = arr[i];
        }
    }
        int second = INT_MAX;
    for(int i=0;i<5;i++)
    {
        if(arr[i] != first && arr[i] < second)
        second = arr[i];
    }
    cout<<"The second smallest element is:"<<second<<endl;
    return 0;
}