#include<iostream>
#include <climits>
using namespace std;

int main(){
    int arr[5]={23,23,11,10,10};
    int visit[0];
    
    for(int i=0;i<5;i++)
    {
        if(visit[i] != 1)
        {
            int count = 1;
            for(int j=i+1;j<5;j++)
            {
                if(arr[i] == arr[j])
                {
                    count++;
                    visit[j]=1;
                }
            }
            cout<<arr[i]<<"occur at"<<count<<"times"<<endl;
        }
    }
   return 0;
}