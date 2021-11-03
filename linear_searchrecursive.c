/*#include<stdio.h>

int linear_search(int arr[], int size,int index, int element){

    if (index < size){
        if (arr[index] == element){
            return index + 1;
        }
        else {
            return linear_search(arr, size, index+ 1, element);
        }
    }
    return -1;


}

int main(){
    int size, element, pos, index= 0;
    int arr[size];
    printf("Enter number of elements : ");
    scanf("%d", &size);
    for (int i = 0;i  < size; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter element to be found : ");
    scanf("%d", &element);
    pos = linear_search(arr, size, index, element);
    if (pos == -1){
        printf("Element not found\n");

    }
    else{
        printf("Element is found at %d.\n", pos);

    }






}*/
#include <stdio.h>
int RecursiveLS(int arr[], int size, int index, int element)
{
    int pos = 0;

    if(index >= size)
    {
        return 0;
    }

    else if (arr[index] == size)
    {
        pos = index + 1;
        return pos;
    }

    else
    {
        return RecursiveLS(arr, size, index+1, element);
    }
    return pos;
}

int main()
{
    int size, element, pos, index = 0, arr[100];
    printf("Enter size ");
    scanf("%d", &size);

    printf("Enter the array elements\n");
    for (int index = 0; index < size; index++)
    {
        scanf("%d", &arr[index]);
    }

    printf("Enter the element to search  ");
    scanf("%d", &element);

    pos =  RecursiveLS(arr, element, 0, size);
    if (pos == 0)
    {
        printf("Element  not found \n");
    }
    else
    {
        printf("Element found at %d \n",pos);
    }
    return 0;
}

