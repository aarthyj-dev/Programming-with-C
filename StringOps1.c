#include<stdio.h>
#include<string.h>
int main()
{
   int choice;
   do
   {
      printf("\n\nYOUR MENU IS ...\n1.Length of a string
                                  \n2.Copy the string
                                  \n3.Concatenation
                                  \n4.Compare the strings
                                  \n5.Lowercase to upper
                                  \n6.Uppercase to lowercase
                                  \n7.Total number of alphabets,digits,special characters
                                  \n8.Total number of vowels and consonants
                                  \n9.Reverse the string
                                  \n10.Palindrome or not
                                  \n11.Exit\n");
      printf("ENTER YOUR CHOICE:");
      scanf("%d",&choice);
      switch(choice)
      {
         case 1:
            length();
            break;
         case 2:
            copy();
            break;
         case 3:
            concate();
            break;
         case 4:
            compare();
            break;
         case 5:
            lowup();
            break;
         case 6:
            uplow();
            break;
         case 7:
            total();
            break;
         case 8:
            vowcons();
            break;
         case 9:
            reverse();
            break;
         case 10:
            palindrome();
            break;
         case 11:
            break;
         default:
            printf("INVALID CHOICE");
      }
   }while(choice!=11);
   return 0;
}
int length()
{
   char s1[100];
   int i=0,len=0;
   printf("ENTER THE STRING:");
   scanf("%s",&s1);
   while(s1[i]!='\0')
   {
      len++;
      i++;
   }
   printf("THE LENGTH OF THE STRING:%d",len);
}
int copy()
{
   int i=0,l;
   char s1[100],s2[100];
   printf("ENTER THE STRING:");
   scanf("%s",&s1);
   l=strlen(s1);
   while(s1[i]!='\0')
   {
      s2[i]=s1[i];
      i++;
   }
   printf("s2 is %s",s2);
}
int concate()
{
   char s1[100],s2[100];
   int i=0,j,k;
   printf("ENTER THE STRING1:");
   scanf("%s",&s1);
   printf("ENTER THE STRING2:");
   scanf("%s",&s2);
   while(s1[i]!='\0')
   {
      i++;
   }
   k=i;
   j=0;
   while(s2[j]!='\0')
   {
      s1[k]=s2[j];
        k++;
      j++;
   }
   printf("THE STRING1 AFTER CONCATE:%s",s1);
}
int compare()
{
   char s1[100],s2[100];
   printf("ENTER THE STRING1:");
   scanf("%s",&s1);
   printf("ENTER THE STRING2:");
   scanf("%s",&s2);
   int count=0,i=0;
   while (s1[i]!='\0' && s2[i]!='\0')
   {
      if(s1[i]!=s2[i])
      {
         count++;
         break;
      }
      i++;
   }
   if(count==0)
   {
      printf("THE STRINGS ARE SAME");
   }
   else
   {
      printf("THE STRINGS ARE NOT SAME ");
   }
}
int lowup()
{
   char s[100];
   printf("ENTER THE STRING:");
   scanf("%s",&s);
   int i=0;
   while(s[i]!='\0')
   {
      s[i]=s[i]-32;
      i++;
   }
   printf("uppercase is %s",s);
}
int uplow()
{
   char s[100];
   printf("ENTER THE STRING:");
   scanf("%s",&s);
   int i=0;
   while(s[i]!='\0')
   {
      s[i]=s[i]+32;
      i++;
   }
   printf("Lowercase is %s",s);
}
int total()
{
   char s[100];
   int a=0,d=0,sp=0,i=0;
   printf("ENTER THE STRING:");
   scanf("%s",&s);
   while(s[i]!='\0')
   {
      if((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z'))
      {
         a++;
      }
      else if(s[i]>='0' && s[i]<='9')
      {
         d++;
      }
      else
      {
         sp++;
      }
      i++;
   }
   printf("No of alphabets:%d",a);
   printf("\nNo of digits:%d",d);
   printf("\nNo of special characters:%d",sp);
}
int vowcons()
{
   char s[100];
   int v=0,c=0,i=0;
   printf("ENTER THE STRING:");
   scanf("%s",&s);
   while(s[i]!='\0')
   {
      if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U')
      {
         v++;
      }
      else
      {
         c++;
      }
      i++;
   }
   printf("\nNo of vowels :%d",v);
   printf("\nNo of consonants:%d",c);
}
int reverse()
{
   char s1[100],s2[100];
   printf("ENTER THE STRING:");
   scanf("%s",&s1);
   int i=0,l;
   l=strlen(s1);
   while(s1[i]!='\0')
   {
      s2[--l]=s1[i];
      i++;
   }
   printf("THE REVERSED STRING IS %s",s2);
}
int palindrome()
{
   char s1[100],s2[100];
   printf("ENTER THE STRING:");
   scanf("%s",&s1);
   int i=0,l,count=0;
   l=strlen(s1);
   while(s1[i]!='\0')
   {
      s2[--l]=s1[i];
      i++;
   }
   printf("\nThe reverse string is:%s",s2);
   int j=0;
   while((s2[j]!='\0') && (s1[j]!='\0'))
   {
      if(s2[j]!=s1[j])
      {
         count++;
         break;
     }
      j++;
   }
  if(count==0)
   {
      printf("\nTHE GIVEN STRING IS A PALINDROME");
   }
   else
   {
      printf("\nTHE GIVEN STRING IS NOT A PALINDROME");
   }
}
/* OUTPUT 
YOUR MENU IS ...
1.Length of a string
2.Copy the string
3.Concatenation
4.Compare the strings
5.Lowercase to upper
6.Uppercase to lowercase
7.Total number of alphabets,digits,special characters
8.Total number of vowels and consonants
9.Reverse the string
10.Palindrome or not
11.Exit
ENTER YOUR CHOICE:1
ENTER THE STRING:program
THE LENGTH OF THE STRING:7

YOUR MENU IS ...
1.Length of a string
2.Copy the string
3.Concatenation
4.Compare the strings
5.Lowercase to upper
6.Uppercase to lowercase
7.Total number of alphabets,digits,special characters
8.Total number of vowels and consonants
9.Reverse the string
10.Palindrome or not
11.Exit
ENTER YOUR CHOICE:2
ENTER THE STRING:hi
s2 is hi

YOUR MENU IS ...
1.Length of a string
2.Copy the string
3.Concatenation
4.Compare the strings
5.Lowercase to upper
6.Uppercase to lowercase
7.Total number of alphabets,digits,special characters
8.Total number of vowels and consonants
9.Reverse the string
10.Palindrome or not
11.Exit
ENTER YOUR CHOICE:3
ENTER THE STRING1:hello
ENTER THE STRING2:hi
THE STRING1 AFTER CONCATE:hellohi

YOUR MENU IS ...
1.Length of a string
2.Copy the string
3.Concatenation
4.Compare the strings
5.Lowercase to upper
6.Uppercase to lowercase
7.Total number of alphabets,digits,special characters
8.Total number of vowels and consonants
9.Reverse the string
10.Palindrome or not
11.Exit
ENTER YOUR CHOICE:4
ENTER THE STRING1:good
ENTER THE STRING2:good
THE STRINGS ARE SAME

YOUR MENU IS ...
1.Length of a string
2.Copy the string
3.Concatenation
4.Compare the strings
5.Lowercase to upper
6.Uppercase to lowercase
7.Total number of alphabets,digits,special characters
8.Total number of vowels and consonants
9.Reverse the string
10.Palindrome or not
11.Exit
ENTER YOUR CHOICE:5
ENTER THE STRING:hi
uppercase is HI

YOUR MENU IS ...
1.Length of a string
2.Copy the string
3.Concatenation
4.Compare the strings
5.Lowercase to upper
6.Uppercase to lowercase
7.Total number of alphabets,digits,special characters
8.Total number of vowels and consonants
9.Reverse the string
10.Palindrome or not
11.Exit
ENTER YOUR CHOICE:6
ENTER THE STRING:HELLO
Lowercase is hello

YOUR MENU IS ...
1.Length of a string
2.Copy the string
3.Concatenation
4.Compare the strings
5.Lowercase to upper
6.Uppercase to lowercase
7.Total number of alphabets,digits,special characters
8.Total number of vowels and consonants
9.Reverse the string
10.Palindrome or not
11.Exit
ENTER YOUR CHOICE:7
ENTER THE STRING:Aa6*)t2
No of alphabets:3
No of digits:2
No of special characters:2

YOUR MENU IS ...
1.Length of a string
2.Copy the string
3.Concatenation
4.Compare the strings
5.Lowercase to upper
6.Uppercase to lowercase
7.Total number of alphabets,digits,special characters
8.Total number of vowels and consonants
9.Reverse the string
10.Palindrome or not
11.Exit
ENTER YOUR CHOICE:8
ENTER THE STRING:hello kitty

No of vowels :2
No of consonants:3

YOUR MENU IS ...
1.Length of a string
2.Copy the string
3.Concatenation
4.Compare the strings
5.Lowercase to upper
6.Uppercase to lowercase
7.Total number of alphabets,digits,special characters
8.Total number of vowels and consonants
9.Reverse the string
10.Palindrome or not
11.Exit
ENTER YOUR CHOICE:ENTER THE STRING:
No of vowels :1
No of consonants:4

YOUR MENU IS ...
1.Length of a string
2.Copy the string
3.Concatenation
4.Compare the strings
5.Lowercase to upper
6.Uppercase to lowercase
7.Total number of alphabets,digits,special characters
8.Total number of vowels and consonants
9.Reverse the string
10.Palindrome or not
11.Exit
ENTER YOUR CHOICE:9
ENTER THE STRING:madam
THE REVERSED STRING IS madam

YOUR MENU IS ...
1.Length of a string
2.Copy the string
3.Concatenation
4.Compare the strings
5.Lowercase to upper
6.Uppercase to lowercase
7.Total number of alphabets,digits,special characters
8.Total number of vowels and consonants
9.Reverse the string
10.Palindrome or not
11.Exit
ENTER YOUR CHOICE:10
ENTER THE STRING:malayalam

The reverse string is:malayalam"
THE GIVEN STRING IS A PALINDROME

YOUR MENU IS ...
1.Length of a string
2.Copy the string
3.Concatenation
4.Compare the strings
5.Lowercase to upper
6.Uppercase to lowercase
7.Total number of alphabets,digits,special characters
8.Total number of vowels and consonants
9.Reverse the string
10.Palindrome or not
11.Exit
ENTER YOUR CHOICE:11 */
