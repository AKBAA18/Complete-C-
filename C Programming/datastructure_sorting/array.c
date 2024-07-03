#include <stdio.h>

int main()
{
    printf("Hello World\n");
    
    int arr[]={9,8,7,6,5,4,3,2,1};
    // int arr[]={1,2,3,4,5,6,7,8,9};
    int klen=sizeof(arr)/sizeof(arr[0]);
    printf("The size of the array is %d\n" , klen);
    printf("Array before sorting : ");
    for (int i=0;i<klen;i++)
    {
        printf("%d " , arr[i]);
    }
    int temp;
    for (int i=0 ; i< klen ; i++)
    {
        for (int j=0;j<klen;j++)
        {
            if (arr[i] < arr[j])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]= temp;
            }
        }
    }
    printf("\nThe sorted array : ");
    for (int i=0;i<klen;i++)
    {
        printf("%d " , arr[i]);
    }
    // printf("");

    return 0;
}
