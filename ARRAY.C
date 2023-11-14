#include<stdio.h>
#include<conio.h>
int main()
{
int arr1[50],arr2[50],merge[100],i,k,size1,size2;
clrscr();
printf("enter the size of arr1:\n");
scanf("%d",&size1);
printf("enter arr1 elements:\n");
for(i=0;i<size1;i++)
{
scanf("%d",&arr1[i]);
merge[i]=arr1[i];
}
k=i;
printf("enter the size of arr2:\n");
scanf("%d",&size2);
printf("Enter arr2 elements:\n");
for(i=0;i<size2;i++)
{
scanf("%d",&arr2[i]);
merge[k]=arr2[i];
k++;
}
printf("\n after merging:\n");
for(i=0;i<k;i++)
{
printf("%d \t",merge[i]);
}
getch();
return 0;
}