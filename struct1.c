#include<stdio.h>
int main()
{
	struct sayan
	{
		char name;
		float price;
		int pages;
	};
	struct sayan b1,b2,b3;
   printf("Enter Name,Price & No Of Pages of 3 Books\n");
   scanf("%c%f%d",&b1.name,&b1.price,&b1.pages);
   scanf("%c%f%d",&b2.name,&b2.price,&b2.pages);
   scanf("%c%f%d",&b3.name,&b3.price,&b3.pages);
   
   printf("And This Is What You Entered \n");
   printf("%c%f%d",b1.name,b1.price,b1.pages);
   printf("%c%f%d",b2.name,b2.price,b2.pages);
   printf("%c%f%d",b3.name,b3.price,b3.pages);
   return 0;


   

}
