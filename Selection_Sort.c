#include<stdio.h>

void display(int arr[],int size){
    for(int i = 0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

}

void SelectionSort(int arr[], int size){
    for (int i = 0; i < size-1; i++)
    {
        int min = i;
        for (int j = i+1; j < size; j++)
        {
            if (arr[j]< arr[min])
            {
                min = j;
                
            }
            
        }
        swap(&arr[min],&arr[i]);
    }
    
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int arr[100];
    int size;
     printf("Enter the size of the array:\n ");
    scanf("%d",&size);
    printf("Enter the elements of the array: \n");
    for(int i = 0; i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Unsorted array elements: \n");
    display(arr,size);
    printf("sorted array: \n");
    SelectionSort(arr,size);
    display(arr,size);
    return 0;


}
