#include<stdio.h>
int main()
{
	int n=10;
    int a[n]={10,9,4,5,6,2,1,8,7,3};
    int i,j,temp;
     for(i=0;i<n;i++)
  {
	for(j=0;j<=n-1;j++)
	{
		if(a[j]>a[j+1])
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
			}
}
printf("print the number in sorted order: ");
for(i=0;i<10;i++)
{
	printf("%d ",a[i]);
}
printf("\n");
}

