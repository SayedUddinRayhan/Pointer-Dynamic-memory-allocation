#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int *arr=(int*)malloc(n*sizeof(int));

    for(int i=0;i<n;i++)
    {
        cin>>*(arr+i);
    }

    int i=0,j=n-1,value;
    cin>>value;
    while(i<j)
    {
        if(*(arr+i)+*(arr+j)==value)
        {
            cout<<"("<<*(arr+i)<<","<<*(arr+j)<<")";
            break;
        }
        else if(arr[i]+arr[j]>value){
            j--;
        }
        else{
            i++;
        }
    }
    return 0;
}
