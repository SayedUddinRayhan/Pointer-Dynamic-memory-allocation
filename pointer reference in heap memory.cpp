#include<bits/stdc++.h>
using namespace std;

int* dis()
{
    int *p;
    p=(int*)malloc(sizeof(int));
    *p=30;
    return p;
}
int main()
{
    int *ptr=dis();
    cout<<*ptr<<"\n";
}
