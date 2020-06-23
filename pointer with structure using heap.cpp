#include<bits/stdc++.h>
using namespace std;

struct st{
    int age;
    double height;
};

int main()
{
    struct st *ptr;
    ptr=(struct st*)malloc(sizeof(struct st));

    ptr->age=30;
    ptr->height=4.4;

    cout<<ptr->age<<"\n";
    cout<<ptr->height<<"\n";
}
