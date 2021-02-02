#include<stdio.h>
#include<conio.h>
    // function for Traversing the Array
void ArrayTraversal(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d\n", arr[i]);
    }
    printf("\n");
};

 // function for deleting element of particular index from Array
void Deletion(int arr[], int size, int index){
    for(int i=index; i<size-1; i++){
        arr[i]=arr[i+1];
    }
};

int main(){
    int arr[50] = {1,6,5,45,78};
    int size=5, index=3;

    printf("before deletion\n");
    ArrayTraversal(arr, size);
    Deletion(arr,size,index);
    size=size-1;
    printf("After deletion\n");
    ArrayTraversal(arr,size);
    

    return 0;
}