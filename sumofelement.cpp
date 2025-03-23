#include<iostream>
#include <climits>
using namespace std;

int main(){
    int arr[5]={14,23,11,56,10};
    int sum = 0;
    for(int i=0;i<5;i++)
    {
        sum += arr[i];
    }
    cout<<"the sum of element of arrr is:"<<sum<<endl;
    return 0;
}