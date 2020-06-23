#include<bits/stdc++.h>
using namespace std;

int main()
{
    float n=3.2;
    float *ptr=&n;
    *ptr=2.7;
    cout<<ptr<<"\n";
    cout<<&n<<"\n";
    cout<<n<<"\n";
    cout<<*ptr<<"\n";
}

