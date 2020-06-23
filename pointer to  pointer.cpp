#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=5;
    int *ptr=&n;
    int **ptr1=&ptr;
    cout<<*ptr1<<"\n";
    cout<<ptr<<"\n";
    cout<<**ptr1<<"\n";
    cout<<*ptr<<"\n";
    cout<<&n<<"\n";

}
