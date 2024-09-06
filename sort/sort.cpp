#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int songaunhien(int a = 1, int b = 100)
{
    return a + rand() % (b - a + 1);
}

void nhapmang(int *a, int n, int x = 1, int y = 100)
{
    for(int i=0;i<n;i++)
        *(a+i) = songaunhien(x,y);
}

void xuatmang(int *a, int n, int option = 1)
{
    if(option)
        for(int i=0;i<n;i++)
            printf("%d ",*(a+i));
    else
        for(int i=n-1;i>=0;i--)
            printf("%d ",*(a+i));
    printf("\n");
}

int main()
{
    srand(time(NULL));
    int n = songaunhien(5,20);
    printf("So luong phan tu: %d\n",n);
    int *a = (int*)malloc(n * sizeof(int));
    nhapmang(a,n);
    printf("Mang vua nhap: ");
    xuatmang(a,n);
    free(a);
}