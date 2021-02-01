#include<stdio.h>
#include<stdlib.h>

struct myArray {
    int total_size;
    int used_size;
    int*ptr;
};
void createArray(int tsize, int usize,struct myArray *a){
    a->total_size = tsize;
    a->used_size = usize;
    a->ptr = (int*)malloc(tsize * sizeof(int));
};
void setVal(struct myArray *a){
    for(int i = 0; i<a->used_size; i++){
        printf("%d" ,a->ptr[i]);
    }
}
void show(struct myArray*a){
    int n;
    for(int i = 0; i<a->used_size; i++){
        printf("%d" ,i);
        scanf("%d",&n);
        a->ptr[i]= n;
    }
}
int main(){
    struct myArray marks;
       createArray(10, 2, &marks);
      printf("hello");
       show(&marks);
      printf("bye");
     setVal(&marks);
     return 0;     
 };
