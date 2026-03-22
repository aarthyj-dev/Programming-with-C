#include<stdio.h>
#include<string.h>
float balance[100];
struct account
{
   int accno;
   char name[20];
   float bal;
}a;
int main()
{
   int i,j,n;
   struct account a[100];
   float minbal=1000.000;
   printf("Enter total no of accounts to be stored:");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
      printf("\nENTER THE DETAILS OF ACCOUNT");
      printf("\nEnter the account number:");
      scanf("%d",&a[i].accno);
      printf("\nEnter the account holder name:");
      scanf("%s",a[i].name);
      printf("\nEnter the balance:");
      scanf("%f",&balance[i]);
      a[i].bal=balance[i]+minbal;
   }
   int choice,ac,ac2;
   float amount;
   do
   {
      printf("\n....BANKING APPLICATION MENU....\n1.Deposit\n2.Withdraw\n3.Transfer amount\n4.Balance\n5.Exit");
      printf("\nEnter the choice:");
      scanf("%d",&choice);
      switch(choice)
      {
         case 1:
         {
            printf("\nEnter the account number:");
            scanf("%d",&ac);
            printf("\nEnter amount to be deposited:");
            scanf("%f",&amount);
            for(i=0;i<n;i++)
            {
               if(a[i].accno==ac)
               {
                  a[i].bal=a[i].bal+amount;
                  printf("The amount %f is successfully deposited to the account %d -%s",amount,a[i].accno,a[i].name);
                  printf("BALANCE:%f",a[i].bal);
               }
            }
            break;
         }
         case 2:
         {
            printf("\nEnter the account number:");
            scanf("%d",&ac);
            printf("\nEnter the amount to be withdraw:");
            scanf("%f",&amount);
            for(i=0;i<n;i++)
            {
               if(a[i].accno==ac)
               {
                  if(a[i].bal>amount)
                  {
                     a[i].bal=a[i].bal-amount;
                     printf("\nThe amount %f is successfully withdrawn from the account %d -%s",amount,a[i].accno,a[i].name);
                     printf("BALANCE:%f",a[i].bal);
                  }
                  else
                  {
                     printf("\nMESSAGE:There is no sufficient amount in your account");
                  }
               }
            }
            break;
         }
         case 3:
         {
            printf("\nEnter your account number:");
            scanf("%d",&ac);
            printf("\nEnter account number where the amount to be transfer:");
            scanf("%d",&ac2);
            printf("\nEnter the amount to be withdraw:");
            scanf("%f",&amount);
            for(i=0;i<n;i++)
            {
               if(a[i].accno==ac)
               {
                  a[i].bal=a[i].bal-amount;
               for(j=0;j<n;j++)
               {
                  if(a[j].accno==ac2)
                  {
                     a[j].bal=a[j].bal+amount;
                     printf("The amount %f has been sucessfully transferred from account %d to account %d",amount,ac,ac2);
                     printf("BALANCE OF ACCOUNT %d:%f",a[i].accno,a[i].bal);
                     printf("BALANCE OF ACCOUNT %d:%f",a[j].accno,a[j].bal);
                  }
               }
              }

            }
            break;
         }
         case 4:
         {
            printf("\nEnter the account number:");
            scanf("%d",&ac);
            for(i=0;i<n;i++)
            {
               if(a[i].accno==ac)
               {
                  printf("Balance :Rs %f",a[i].bal);
               }
            }
            break;
         }
         case 5:
         {
            printf("\nTHE BANK APPLICATION IS EXICTED....");
            break;
         }
      }
   }while(choice!=5);
   return 0;
}
/*OUTPUT
Enter total no of accounts to be stored:2

ENTER THE DETAILS OF ACCOUNT
Enter the account number:2023

Enter the account holder name:aarthy

Enter the balance:0

ENTER THE DETAILS OF ACCOUNT
Enter the account number:2024

Enter the account holder name:abi

Enter the balance:0

....BANKING APPLICATION MENU....
1.Deposit
2.Withdraw
3.Transfer amount
4.Balance
5.Exit
Enter the choice:1

Enter the account number:2023

Enter amount to be deposited:100
The amount 100.000000 is successfully deposited to the account 2023 -aarthyBALANCE:1100.000000
....BANKING APPLICATION MENU....
1.Deposit
2.Withdraw
3.Transfer amount
4.Balance
5.Exit
Enter the choice:3

Enter your account number:2023

Enter account number where the amount to be transfer:2024

Enter the amount to be withdraw:2023
The amount 2023.000000 has been sucessfully transferred from account 2023 to account 2024 
BALANCE OF ACCOUNT 2023:-923.000000
BALANCE OF ACCOUNT 2024:3023.000000

  ....BANKING APPLICATION MENU....
1.Deposit
2.Withdraw
3.Transfer amount
4.Balance
5.Exit
Enter the choice:4

Enter the account number:2024
Balance :Rs 3023.000000
....BANKING APPLICATION MENU....
1.Deposit
2.Withdraw
3.Transfer amount
4.Balance
5.Exit
Enter the choice:5

THE BANK APPLICATION IS EXICTED....
*/
