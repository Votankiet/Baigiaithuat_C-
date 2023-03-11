//Insertion sort
#include <stdio.h>
#include <conio.h>
#include <cstdlib>
void NhapMang(int a[],int n)
	{
    for(int i=0; i<n; i++)
		{
        printf("\nNhap a[%d]=",i);
        scanf("%d",&a[i]);
    }
}
void XuatMang(int a[],int n)
	{
    for(int i=0; i<n; i++)
		{
        printf("%d \t",a[i]);
    }
}
void InsertionSort(int a[], int n)
{
    int pos, i;
    int x;
    for(i=1 ; i<n ; i++)
    {
        x = a[i]; 
        pos = i-1;
        while((pos >= 0) && (a[pos] > x))
        {
            a[pos+1] = a[pos];
            pos--;
        }
        a[pos+1] = x;
    }
    printf("\nMang sau khi sap xep la:\n");    
    XuatMang(a,n);
}
int main()
	{
    int a[100];
    int n;
    printf("Nhap so phan tu:");
    scanf("%d",&n);
    NhapMang(a,n);
    printf("\nMang sau khi nhap la:\n");
    XuatMang(a,n);
    InsertionSort(a,n);
}
