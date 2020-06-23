#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=5;
    int *ptr=&n;
    *ptr=23;
    cout<<ptr<<"\n";
    cout<<&n<<"\n";
    cout<<n<<"\n";
    cout<<*ptr<<"\n";
}

