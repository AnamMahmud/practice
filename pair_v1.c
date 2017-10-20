#include <stdio.h>
#include <stdlib.h>
struct pair{
        int no1;
        struct pair* next;

    }
typedef pair;

int* InputFunction(int arr[6]){
    int c,d, *head, count,x;
    pair *A,*temp;
    head=NULL;
    count=0;
    x=0;
//pA=(int*)calloc(2,sizeof(int));
    for(c=0;c<6;c++){
        for(d=0;d<6;d++){
            if (arr[c]==arr[d]){
                count++;
            }          
        }
        if(count==1){
            temp=(int *)calloc(4,sizeof(int));
            temp->no1=arr[c];
            temp->next=head;
        printf("linkList= %d\n",temp->no1);
            head=temp;

        }
	count=0;
    }
    return temp;
    
}
int main() {
    
    pair *pA;

int arr[6]={2,3,3,2,1,4};
pA=InputFunction(arr);

printf("pair={%d,%d}",pA->no1,pA->next->no1);
   
	return 0;
}
