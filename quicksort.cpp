//QuickSort
#include <stdio.h>
#include <conio.h>
#include<cstdlib>
void quicksort(int* arr, int left, int right);

int main() 
{
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int* arr = (int*)malloc(n * sizeof(int));
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }

    quicksort(arr, 0, n - 1);

    printf("Mang da sap xep la:\n");
    for (int i = 0; i < n; i++) 
		{
        printf("%d ", arr[i]);
    }
    free(arr);

    return 0;
}

void quicksort(int* arr, int left, int right) 
{
    int i = left, j = right;
    int pivot = arr[(left + right) / 2];

    while (i <= j) {
        while (arr[i] < pivot) 
			{
            i++;
        }
        while (arr[j] > pivot) 
			{
            j--;
        }
        if (i <= j) 
			{
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }

    if (left < j) {
        quicksort(arr, left, j);
    }
    if (i < right) {
        quicksort(arr, i, right);
    }
}