#include<bits/stdc++.h>
using namespace std;

void dis(int *val)//formal parameter
{
    *val=30;
}
int main()
{
    int n;
    cin>>n;
    dis(&n);//actual parameter
    cout<<n<<"\n";
    return 0;
}
