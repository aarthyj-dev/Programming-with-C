#include<stdio.h>
#include<string.h>
int position()
{
   char s[100],c;
   int i=0,count=0;
   printf("ENTER THE STRING:");
   scanf("%s\n",s);
   printf("\nENTER THE CHARACTER TO BE SEARCHED:");
   scanf("%c",&c);
   while(s[i]!='\0')
   {
      if(s[i]==c)
      {
         printf("\nThe character is found at position %d",i+1);
         count++;
      }
      i++;
   }
   if(count==0)
   {
      printf("\nThe character is not found");
   }
}
int character()
{
   int i,p;
   char s[100];
   printf("\nENTER THE STRING:");
   scanf("%s",s);
   printf("\nENTER THE SPECIFIED POSITION:");
   scanf("%d",&p);
   printf("\nThe character at position %d is %c",p,s[p-1]);
}
int palindrome()
{
   char s1[100],s2[100];
   int i=0,l=0,j,count=0;
   printf("\nENTER THE STRING:");
   scanf("%s",s1);
   while(s1[i]!='\0')
   {
      l++;
      i++;
   }
   for(j=0;s1[j]!='\0';j++)
   {
     s2[--l]=s1[j];
   }
   printf("\nThe reversed string is %s",s2);
   int k=0;
   while(s1[k]!='\0' && s2[k]!='\0')
   {
      if(s2[k]!=s1[k])
      {
         count++;
         break;
      }
      k++;
   }
   if(count==0)
   {
      printf("The given string is a palindrome");
   }
   else
   {
      printf("The given string is not a palindrome");
   }
}
int noofocc()
{
   char s[100],c;
   printf("\nENTER THE STRING:");
   scanf("%s\n",s);
   printf("\nENTER THE CHARACTER:");
   scanf("%c",&c);
   int i=0,count=0;
   while(s[i]!='\0')
   {
      if(s[i]==c)
      {
         count++;
      }
      i++;
   }
   if(count==0)
   {
      printf("\nTHE CHARACTER IS NOT FOUND");
   }
   else
   {
      printf("\nTHE %c IS FOUND AT %d TIMES IN A STRING",c,count);
   }
}
int main()
{
   int choice;
   do
   {
      printf("\nYOUR MENU...\n1.Search a character and report its position
                            \n2.Find out the character at the specified position
                            \n3.Display the number of occurances
                            \n4.Palindrome or not
                            \n5.Exit");
      printf("\nENTER YOUR CHOICE:");
      scanf("%d",&choice);
      switch(choice)
      {
         case 1:
            position();
            break;
         case 2:
            character();
            break;
         case 3:
            noofocc();
            break;
         case 4:
            palindrome();
            break;
         case 5:
            break;
         default:
            printf("INVALID CHOICE");
      }
   }while(choice!=5);
   return 0;
}


/* OUTPUT
YOUR MENU...
1.Search a character and report its position
2.Find out the character at the specified position
3.Display the number of occurances
4.Palindrome or not
5.Exit
ENTER YOUR CHOICE:1
ENTER THE STRING:hello
l

ENTER THE CHARACTER TO BE SEARCHED:
The character is found at position 3
The character is found at position 4
YOUR MENU...
1.Search a character and report its position
2.Find out the character at the specified position
3.Display the number of occurances
4.Palindrome or not
5.Exit
ENTER YOUR CHOICE:2

ENTER THE STRING:hellokitty

ENTER THE SPECIFIED POSITION:2

The character at position 2 is e
YOUR MENU...
1.Search a character and report its position
2.Find out the character at the specified position
3.Display the number of occurances
4.Palindrome or not
5.Exit
ENTER YOUR CHOICE:3

ENTER THE STRING:good
d

ENTER THE CHARACTER:
THE d IS FOUND AT 1 TIMES IN A STRING
YOUR MENU...
1.Search a character and report its position
2.Find out the character at the specified position
3.Display the number of occurances
4.Palindrome or not
5.Exit
ENTER YOUR CHOICE:5 */
