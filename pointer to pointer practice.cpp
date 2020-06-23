#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=20;
    int *ptr=&n;
    int *ptr1=ptr;
    *ptr1=70;

    cout<<*ptr<<"\n";
    cout<<*ptr1<<"\n";
    cout<<n<<"\n";
}
