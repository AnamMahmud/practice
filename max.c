#include <stdio.h>
#include <stdlib.h>

int* Max_Pair(int n, int arr[n]){
    int p,y,q,k,l;
    for(p=0;p<n-1;p++){
        for (q=p+1;q<n;q++) 
        {
            k=arr[p];
            l=arr[q];
            if (k>l){
                arr[p]=l;
                arr[q]=k;
            }
        }
    }
    int *res;
    res=(int*) calloc(4,sizeof(int));
    res[0]=arr[0];
    res[1]=arr[n-1];
    printf("se=%d\n",res[1]);
    return res;
}
int main() {
    int t,n;
    
     printf("Enter the iteration number\n");
      scanf("%d",&t);
    while(t--){
    
        printf("Enter the array size\n");
        scanf("%d",&n);
	    int arr[n],i;
	
	    for(i=0;i<n;i++){
	    
	        scanf("%d",&arr[i]);
	    }
	    Max_Pair(n,arr);
	        int *out;
    out=Max_Pair(n,arr);
    printf("out %d %d",out[0],out[1]);
    printf("\n");
    }

	return 0;
}