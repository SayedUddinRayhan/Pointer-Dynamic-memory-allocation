#include<bits/stdc++.h>
using namespace std;

struct st{

    int age;
    int id;

};

int main()
{
    struct st s1;
    s1.age=4;
    s1.id=111;

    struct st *s2;

    s2=&s1;
    (*s2).age=12;  //s2->age=12;
    (*s2).id=3333; //a2->id=3333;

    cout<<s1.age<<"\n";
    cout<<s1.id<<"\n";
}
