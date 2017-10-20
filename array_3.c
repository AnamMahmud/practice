#include <stdio.h>
#include <stdlib.h>



int* Search(int n,int arr[n]){

	
	int j,k,*out,count;
	count=0;
	out=(int*)calloc(4,sizeof(int));

	for (j=0;j<n-1;j++){
		for(k=j+1;k<n;k++){

			//if (arr[j])>0{
						
				if(arr[j]==-arr[k]){
					
				out[count++]=-1*arr[j];
				//printf("inside=%d\n",out[count]);
			
				out[count++]=arr[j];
			
				}
			//}
		}
	}

return out;

}

int main(){

int t;
scanf("%d",&t);
while(t--){
	int i;
	int n;
	scanf("%d",&n);
	int arr[n];
	for (i=0;i<n;i++){
		scanf("%d",&arr[i]);

	}

 int *out;
int p;
	out=Search(n,arr);
	p=0;
	while (out[p] != NULL){
		printf("%d ",*(out+p));
		p++;
	}
	
printf("\n");
}
return 0;

}