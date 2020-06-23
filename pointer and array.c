#include<stdio.h>

int main()
{
    int arr[3]={4,2,8};

    for(int i=0;i<3;i++)
    {
        printf("%d\n",&arr[i]);
    }

    printf("%d\n",&arr[0]);
    printf("%d\n",&arr);

    printf("%d\n\n",*(arr+1)); //*arr=arr[0],*(arr+1)=arr[1] cause *arr+1==pointer arithmetic

    for(int i=0;i<3;i++)
    {
        printf("%d\n",*(arr+i));
    }

}
