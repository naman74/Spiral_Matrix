#include<stdio.h>
int a[20][20];
int main()
{
	int i,n,rr,cc,row,col,tr,tc,tt;
	printf("Enter the dimension of the square matrix");
	scanf("%d",&n);
	

	row=1;
	col=1;
	rr=0;
	cc=1;
	
	for(i=1;i<=n*n;i++){
		a[row][col]=i;
		tr=row+rr;
		tc=col+cc;
	if(tc>n || tr>n ||tc<1 || tr<1 ||a[tr][tc]!=0)
	{
		tt=cc;
		cc=-rr;
		rr=tt;
	}
	row = row + rr;
	col = col + cc;		
	}
	printf("The Spiral matrix is\n\n\t\t");
	for(row=1;row<=n;row++){
		for(col=1;col<=n;col++)
			printf("%4d",a[row][col]);
			
		printf("\n\n\t\t");	
		
	}
}
