#include <stdio.h>

struct pair
{
    int min;
    int max;
};

struct pair max_min(int arr[], int low, int high)
{
    struct pair maxmin, x, y;
    int mid;
    // if there is  one element
    if (low == high)
    {
        maxmin.max = arr[low];
        maxmin.min = arr[low];
        return maxmin;
    }
    // if there are two  element

    if (high == low + 1)
    {
        if (arr[low] > arr[high])
        {
            maxmin.max = arr[low];
            maxmin.min = arr[high];
        }
        else
        {
            maxmin.max = arr[high];
            maxmin.min = arr[low];
        }

        return maxmin;
    }

    // if there are more than two elements
    mid = (low + high) / 2;
    x = max_min(arr, low, mid);
    y = max_min(arr, mid + 1, high);

    if (x.min < y.min)
    {
        maxmin.min = x.min;
    }
    else
        maxmin.min = y.min;
    if (x.max > y.max)
    {
        maxmin.max = x.max;
    }
    else
        maxmin.max = y.max;

    return maxmin;
}
int main()
{
    int arr[10];
    int n = sizeof(arr) / sizeof(int);
    for(int i= 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    struct pair minmax = max_min(arr, 0, n - 1);
    printf("Max: %d\n", minmax.max);
    printf("Min: %d\n", minmax.min);
    getchar();
  
}
