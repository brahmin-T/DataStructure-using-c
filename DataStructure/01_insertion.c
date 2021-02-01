#include<stdio.h>
#include<conio.h>
void ArrayTraversal(int arr[],int n){
    // For Array Traversal
    for(int i=0; i<n; i++){
        printf("%d\n", arr[i]);
    }
   printf("\n");
}
// For inserting elements change the index and insert elements //
int insertion(int arr[], int element, int size, int capacity, int index){
    if(size>=capacity){
      printf("insertion failed due to overflow");
    }

    for(int i=size-1; i>=index; i--){
        arr[i+1] = arr[i];

    }
    arr[index] = element;
    printf("succesfully inserted\n");
}




int main(){
    int arr[50] ={4,6,5,9,8};
    int size=5, element=45, capacity,index=3;

    ArrayTraversal(arr,size);
    insertion(arr,element,size,50,index);
    size=size+1;
     ArrayTraversal(arr,size);
    return 0;
}