#include<iostream>
using namespace std;

int main(){
    int arr[5]={14,23,11,56,10};
    int min = arr[0],max=arr[0];
    for(int i=0;i<5;i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
        if(arr[i] > max)
        {
            max =arr[i];
        }
    }
    cout<<"The smallest element is:"<<min<<endl;
    cout<<"The largest element is:"<<max<<endl;
    return 0;
}