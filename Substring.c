#include<stdio.h>
#include<string.h>
int main()
{
   char a[100],b[100];
   int count=0,i,j,k;
   printf("ENTER THE STRING:");
   scanf("%[^\n]%*c",&a);
   printf("ENTER THE SUBSTRING:");
   scanf("%s",&b);
   for(i=0;a[i]!='\0';i++)
   {
      if(a[i]==b[0])
      {
         k=i;
         for(j=0;b[j]!='\0';j++)
         {
            if(a[k]!=b[j])
            {
               break;
            }
            k++;
         }
         if(j==strlen(b))
         {
            count++;
         }
      }
   }
   if(count==0)
   {
      printf("SUBSTRING NOT FOUND!!");
   }
   else
   {
      printf("SUBSTRING FOUND!!%s is found %d times in the main string\n",b,count);
   }
   return 0;
}
/*OUTPUT
ENTER THE STRING:hi good morning
ENTER THE SUBSTRING:good
SUBSTRING FOUND!!good is found 1 times in the main string */
