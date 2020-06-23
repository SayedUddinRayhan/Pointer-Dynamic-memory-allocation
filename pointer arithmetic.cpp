#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=1;
    int *ptr=&n;


    //++(*ptr); 21
    printf("%d\n",ptr);
    ++(ptr);  //4byte increase for int,1byte increase for character,8byte increase for double

    printf("%d\n",ptr);
}
