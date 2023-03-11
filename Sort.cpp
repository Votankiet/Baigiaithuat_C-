//Interchange Sort
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
void InterchangeSort(int a[], int n)
	{
    for(int i=0 ; i<n-1 ; i++)
		{
        for(int j=i+1; j<n ; j++)
			{
            if(a[i]>a[j])
				{
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
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
    InterchangeSort(a,n);
}
