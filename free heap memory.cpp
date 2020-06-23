#include<bits/stdc++.h>
using namespace std;

struct st
{

};
int main()
{
    int *ptr=(int*)malloc(sizeof(struct st));
    free(ptr);
    ptr=NULL;
}
