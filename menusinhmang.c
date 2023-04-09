#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void generateArray(int arr[], int n) 
{
    srand(time(NULL));
    int  i;
    for ( i = 0; i < n; i++)
	{
        arr[i] = rand() % 101;
    }
}

void printArray(int arr[], int n) 
{
    printf("mang: ");
    int i;
    for ( i = 0; i < n; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubbleSort(int arr[], int n) 
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++) 
	{
        for (j = 0; j < n - i - 1; j++) 
		{
            if (arr[j] > arr[j + 1]) 
			{
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void selectionSort(int arr[], int n) 
{
    int i, j, minIndex, temp;
    for (i = 0; i < n - 1; i++) 
	{
        minIndex = i;
        for (j = i + 1; j < n; j++) 
		{
            if (arr[j] < arr[minIndex]) 
			{
                minIndex = j;
            }
        }
        if (minIndex != i) 
		{
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}
void selection(int arr[], int n) 
{
    int i, j, minIndex, temp;
    for (i = 0; i < n - 1; i++) 
	{
        minIndex = i;
        for (j = i + 1; j < n; j++) 
		{
            if (arr[j] > arr[minIndex]) 
			{
                minIndex = j;
            }
        }
        if (minIndex != i) 
		{
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int main() {
    int n, choice;
    printf("nhap so luong: ");
    scanf("%d", &n);
    int arr[n];
    generateArray(arr, n);
    do {
        printf("\n----------------------------Menu---------------------------------\n");
        printf("1. in mang\n");
        printf("2. sap xep tang bubble sort\n");
        printf("3. sap xep giam bubble sort\n");
        printf("4. sap xep tang selection sort\n");
        printf("5. sap xep giam selection sort\n");
        printf("6. Thoat\n");
        printf("chon chuc nang menu thuc hien: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printArray(arr, n);
                break;
            case 2:
                bubbleSort(arr, n);
                printf("mang duoc sap xep theo thu tu tang dan: ");
                printArray(arr, n);
                break;
            case 3:
                bubbleSort(arr, n);
                printf("mang duoc sap xep theo thu tu giam dan: ");
                int i;
                for ( i = n-1; i >= 0; i--)
                {
                	printf ("%d", arr[i]);
				}
				printf ("\n");
				break;
			case 4: 
			    selectionSort(arr,n);
			    printf ("mang duoc sap xep theo thu tu tang dan: ");
			    printArray(arr,n);
			    break;
			case 5: 
			    selectionSort (arr,n);
			    printf ("mang duoc sap xep giam dan: ");
			    for (i = n-1;i>=0;i--)
			    {
			    	printf ("%d", arr[i]);
				}
			case 6:
			    printf ("thoat khoi ");
				break;
			default:
			    choice = 0;     
			break;
			}
		}   while (choice !=0);
} 
