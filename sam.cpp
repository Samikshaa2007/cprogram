
#include<stdio.h>
int main()
{
	int n,i,marks,total=0;
	float percentage;
	
	printf("enter the number of subjects:");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		printf("enter the marks for subject %d:"),i;
		scanf("%d",&marks);
	}
	
	total=total+marks;

percentage=(float)total/n;

printf("\n Total Marks=%d",total);
printf("\n Percentage=%.2f%%",percentage);

if(percentage>=90)
   printf("\n Grade=A+");
else if(percentage>=80)
   printf("\n Grade=A");
else if(percentage>=70)
   printf("\n Grade=B");
else if(percentage>=60)
   printf("\n Grade=C");
else if(percentage>=50)
   printf("\n Grade=D");
else
   printf("\nGrade=F");
   
return 0;
}