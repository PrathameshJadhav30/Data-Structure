#include<stdio.h>
void insertionsort(int*arr,int n)
{
	int i,temp,j;
	for(i=1;i<n;i++)
	{
		temp=arr[i];
		for(j=i-1;j>=0&&arr[j]>temp;j--)
		  arr[j+1]=arr[j];
		arr[j+1]=temp;
	}
}
void display(int*arr,int n)
{
	int i;
	for(i=0;i<n;i++)
	 printf("%d",arr[i]);
	
}
void insert(int*arr,int size)
{
	int i;
	printf("\nEnter data for following elements\n");
	for(i=0;i<size;i++)
	{
		printf("Arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	
}
int main()
{
	int arr[50],size_arr;
	printf("****Insertion sort****\n\n");
	printf("Enter Size of array:");
	do
	{
		scanf("%d",&size_arr);
		if(size_arr<=0)
		{
			printf("(invalid)Enter a non-zero Number:");
		}
	}
	while(size_arr<=0);
	insert(arr,size_arr);
	printf("\nOriginal array:");
	display(arr,size_arr);
	insertionsort(arr,size_arr);
	printf("\nSorted array:");
	display(arr,size_arr);
	return 0;
}
