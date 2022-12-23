#include<stdio.h>
#include<stdlib.h>


void swap(int *x,int *y){
    int t=*x;
    *x=*y;
    *y=t;
}

void minheapify(int arr[], int N, int i)
{

	int smallest = i;

	int left = 2 * i + 1;

	int right = 2 * i + 2;

	if (left < N && arr[left] < arr[smallest])

		smallest = left;
	if (right < N && arr[right] < arr[smallest])

		smallest = right;
	if (smallest != i) {

		swap(&arr[i], &arr[smallest]);

		minheapify(arr, N, smallest);
	}
}

void heapSort(int arr[], int N)
{

	for (int i = N / 2 - 1; i >= 0; i--)

		minheapify(arr, N, i);
	for (int i = N - 1; i >= 0; i--) {

		swap(&arr[0], &arr[i]);
		minheapify(arr, i, 0);
	}
}

int main()
{
    int N;
    printf("enter the size of array \n");
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }

	heapSort(arr, N);
	printf("Sorted array is\n");

    for(int i=0;i<N;i++){
        printf("%d\t",arr[i]);
    }
	
    return 0;
}