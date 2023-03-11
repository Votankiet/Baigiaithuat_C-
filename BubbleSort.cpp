//Bubble Sort
#include <stdio.h>
#include <conio.h>
#include <cstdlib>

void NhapMang(int a[],int n){
    for(int i=0; i<n; i++)
		{
        printf("\nNhap a[%d]= ",i);
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
void BubbleSort(int a[], int n)
	{
    for(int i=0 ; i<n-1 ; i++)
		{
        for(int j=n-1; j>i ; j--)
			{
            if(a[i]>a[j])
				{
                int temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }
        }
    }
    printf("\nMang sau khi sap xep la: \n");    
    XuatMang(a, n);  
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
    BubbleSort(a,n);
}
