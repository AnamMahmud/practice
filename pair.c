#include <stdio.h>
#include <stdlib.h>


int* InputFunction(int arr[6]){
    int c,d,count,*pA,x;
    count=0;
    x=0;
pA=(int*)calloc(2,sizeof(int));
    for(c=0;c<6;c++){
        for(d=0;d<6;d++){
            if (arr[c]==arr[d]){
                count++;
            }          
        }
        if(count==1){
            pA[x]=arr[c];
            x++;
        }
	count=0;
    }
    return pA;
    
}
int main() {
    int *pA,b;

int arr[6]={2,3,3,2,1,4};
pA=InputFunction(arr);

printf("pair={%d,%d}",pA[0],pA[1]);
   
	return 0;
}
