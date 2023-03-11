//Selection sort
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
void SelectionSort(int a[], int n)
	{
    for(int i=0; i<n-1; i++)
    {
        int min = i;
        for (int j = i+1; j<n; j++)
			{
            if (a[j]<a[min])
			{ 
                min = j;
            }
			}
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    printf("\nMang sau khi sap xep la:\n");    
    XuatMang(a,n);    
}
int main(){
    int a[100];
    int n;
    printf("Nhap so phan tu:");
    scanf("%d",&n);
    NhapMang(a,n);
    printf("\nMang sau khi nhap la:\n");
    XuatMang(a,n);
    SelectionSort(a,n);
}
