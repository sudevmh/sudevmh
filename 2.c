#include<stdio.h>
int main()
{
 struct student
	{
		int stu_id;
		char name[20];
		float lang2_marks;
		float lang1_marks;
		//float sst_marks;
		float mat_marks;
		float comp_marks;
		float avg;
		
	};
struct student s[20];
int i,n;

printf("Enter the number of records :");
scanf("%d",&n);

printf("Enter %d student details...\n",n);

for(i=0;i<n;i++)
{

printf("\n\nEnter student ID :");
scanf("%d",&s[i].stu_id);


printf("Enter student name :");
scanf("%s",&s[i].name);
printf("Enter lang1 marks :");
scanf("%f",&s[i].lang2_marks);
printf("Enter lang2 marks :");
scanf("%f",&s[i].lang1_marks);
printf("Enter  maths marks :");
scanf("%f",&s[i].mat_marks);
printf("Enter comp marks :");
scanf("%f",&s[i].comp_marks);


}

for(i=0;i<n;i++)
	{
		s[i].avg=(s[i].lang2_marks + s[i].lang1_marks + s[i].mat_marks + s[i].comp_marks)/4.0;
	}


printf("students scoring above the average marks....\n");
printf("\n\nID\tName\tAverage\n\n");

for(i=0;i<n;i++)
{
if(s[i].avg>35.0)
printf("%d\t%s\t%f\n",s[i].stu_id,s[i].name,s[i].avg);

}
return 0;

}

