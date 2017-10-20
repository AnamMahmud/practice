#include <stdio.h>
#include <stdlib.h>
struct pair{
        int no1;
        struct pair* next;

    }
typedef pair;

int* InputFunction(int n, int arr[n]){
    int c,d, *head, count,x;
    pair *A,*temp;
    head=NULL;
    count=0;
    x=0;

    for(c=0;c<n;c++){
        for(d=0;d<n;d++){
            if (arr[c]==arr[d]){
                count++;
            }          
        }
        if(count==1){
            temp=(int *)calloc(4,sizeof(int));
            temp->no1=arr[c];
            temp->next=head;
            head=temp;
        }
    count=0;
    }
    return temp;
    
}
int main() {
    
    pair *pA;
    int t,n,i;
    scanf("%d",&t);
while(t--){
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    pA=InputFunction(n,arr);
    
    if (pA->no1>pA->next->no1){
        int N;
        N=pA->no1;
        pA->no1=pA->next->no1;
        pA->next->no1=N;
    }

    printf("%d %d",pA->no1,pA->next->no1);
    printf("\n");
}
   
    return 0;
}
