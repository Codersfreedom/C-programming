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
    int arr[] = {345,56,34,5,3423,34};
    int size = sizeof(arr)/ sizeof(int);
    printf("Unsorted arry: \n");
    display(arr,size);
    printf("sorted array: \n");
    SelectionSort(arr,size);
    display(arr,size);
    return 0;


}