#include<stdio.h>
void display(int arr[], int n){
	for(int i = 0; i<n;i++){
		printf("%d ",arr[i] );


	}
	printf("\n");

}



int RecursiveBinarySearch(int arr[], int n, int low,int high,int x){

if(low <= high){
int mid = (low+high)/2;

if( arr[mid] == x)
    return mid;
else if(x > arr[mid])
    RecursiveBinarySearch(arr,n,mid+1,high,x);
else
    RecursiveBinarySearch(arr,n,low,mid-1,x);
}
else
return -1;
}


int main(){
	int arr[10];
	int n,e,temp;
	printf("Enter the size of the array: \n");
	scanf("%d",&n);
	printf("Enter the elements: \n");
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&arr[i]);

	}	for(int j = 0 ; j<n;j++)
	for(int k = 0; k< (n-1-j);k++)
		if(arr[j] > arr[j+1] ){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
			
	printf("Elements are: ");
	display(arr,n);
	printf("Enter the element to be search: \n");
	scanf("%d",&e);
	printf("The element is found at index no %d", RecursiveBinarySearch(arr,n,0,n-1,e));
	return 0;
}
