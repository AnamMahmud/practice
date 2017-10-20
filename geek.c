#include <stdio.h>

int main() 
{
	int t,n,count,x,y,c;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&n);
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    count=x=y=c=0;
	    for(int i=0;i<n;i++)
	    {
	        count=0;
	        if(a[i]!=0)
	        {
	            count++;
	            for(int j=i+1;j<n;j++)
	            {
	                if(a[i]==a[j])
	                {
	                    count++;
	                    a[j]=0;
	                }
	            }
	            if(c==0)
	            {
	                x=count;
	                y=count;
	                c=1;
	            }
	            else
	            {
	            if(count>x)
	               x=count;
	            else if(count<y)
	               y=count;
	            }
	        }
	    }
	    printf("%d\n",x-y);
	}
	return 0;
}