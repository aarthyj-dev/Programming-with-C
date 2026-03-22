#include<stdio.h>
#include<string.h>
struct student
{
   int rollno;
   float eng,mat,phy,chem,proginc,civmech,total,avg;
   char name[20];
};
int main()
{
   int i,n,n1,j,choice;
   struct student st[65];
   printf("ENTER THE NUMBER OF STUDENTS:");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
      printf("Enter the records of student %d",i+1);
      printf("\nEnter the roll number:");
      scanf("%d",&st[i].rollno);
      printf("\nEnter the name:");
      scanf("%s",st[i].name);
      printf("\nEnter the marks in English,maths,physics,chemistry,proginc,civmech:");
      scanf("%f%f%f%f%f%f",&st[i].eng,&st[i].mat,&st[i].phy,&st[i].chem,&st[i].proginc,&st[i].civmech);
      st[i].total=st[i].eng+st[i].mat+st[i].phy+st[i].chem+st[i].proginc+st[i].civmech;
      st[i].avg=st[i].total/6;
   }
   do
   {
      printf("\n .....YOUR MENU .....\n1.Display details\n2.Toppers\n3.Slow learners\n4.English toppers\n5.Maths toppers\n6.Physics toppers\n7.Chemistry toppers\n8. Prog in C toppers\n9.Civil&Mech toppers\n10.Exit" );
      printf("\nENTER YOUR CHOICE:");
      scanf("%d",&choice);
      switch(choice)
      {
         case 1:
         {
            int r;
            printf("\nEnter the roll number:");
            scanf("%d",&r);
            for(i=0;i<n;i++)
            {
               if(r==st[i].rollno)
               {
                  printf("\nTHE DETAILS ARE.....");
                  printf("\n Roll no:%d",st[i].rollno);
                  printf("\n Name:%s",st[i].name);
                  printf("\n ...MARKS...\n English:%f\nMaths:%f\nPhysics:%f\nChemistry:%f\nProg in C:%f\nCivil&Mech:%f\nTotal:%f\nAverage:%f",st[i].eng,st[i].mat,st[i].phy,st[i].chem,st[i].proginc,st[i].civmech,st[i].total,st[i].avg);
               }
            }
            break;
         }
         case 2:
         {
            struct student temp;
            for(i=0;i<n;i++)
            {
               for(j=i+1;j<n;j++)
               {
                  if(st[i].total<st[j].total)
                  {
                     temp=st[i];
                     st[i]=st[j];
                     st[j]=temp;
                  }
               }
            }
            printf("\nENTER THE NO OF STUDENTS TO BE DISPLAY:");
            scanf("%d",&n1);
            printf("\nTOP %d TOPPERS",n1);
            for(i=0;i<n1;i++)
            {
               printf("\n%d.\n Roll no:%d\n Name:%s\nTotal:%f\nAverage:%f",i+1,st[i].rollno,st[i].name,st[i].total,st[i].avg);
            }
            break;
         }
         case 3:
         {
            struct student temp;
            for(i=0;i<n;i++)
            {
               for(j=i+1;j<n;j++)
               {
                  if(st[i].total>st[j].total)
                  {
                     temp=st[i];
                     st[i]=st[j];
                     st[j]=temp;
                  }
               }
            }
            printf("\nENTER THE NO OF STUDENTS TO BE DISPLAY:");
            scanf("%d",&n1);
            printf("\n %d SLOW LEARNERS",n1);
            for(i=0;i<n1;i++)
            {
               printf("\n%d.\n Roll no:%d\n Name:%s\nTotal:%f\nAverage:%f",i+1,st[i].rollno,st[i].name,st[i].total,st[i].avg);
            }
            break;
         }
         case 4:
         {

             struct student temp;
             for(i=0;i<n;i++)
             {
               for(j=i+1;j<n;j++)
               {
                  if(st[i].eng<st[j].eng)
                  {
                     temp=st[i];
                     st[i]=st[j];
                     st[j]=temp;
                  }
               }
            }
            printf("\nENTER THE NO OF STUDENTS TO BE DISPLAY:");
            scanf("%d",&n1);
            printf("\n %d ENGLISH TOPPERS",n1);
            for(i=0;i<n1;i++)
            {
               printf("\n%d.\n Roll no:%d\n Name:%s\nEnglish:%f",i+1,st[i].rollno,st[i].name,st[i].eng);
            }
            break;
         }
         case 5:
         {
            struct student temp;
            for(i=0;i<n;i++)
            {
               for(j=i+1;j<n;j++)
               {
                  if(st[i].mat<st[j].mat)
                  {
                     temp=st[i];
                     st[i]=st[j];
                     st[j]=temp;
                  }
               }
            }
            printf("\nENTER THE NO OF STUDENTS TO BE DISPLAY:");
            scanf("%d",&n1);
            printf("\n %d MATHS TOPPERS",n1);
            for(i=0;i<n1;i++)
            {
               printf("\n%d.\n Roll no:%d\n Name:%s\nMaths:%f",i+1,st[i].rollno,st[i].name,st[i].mat);
            }
            break;
         }
         case 6:
         {
            struct student temp;
            for(i=0;i<n;i++)
            {
               for(j=i+1;j<n;j++)
               {
                  if(st[i].phy<st[j].phy)
                  {
                     temp=st[i];
                     st[i]=st[j];
                     st[j]=temp;
                 }
               }
            }
            printf("\nENTER THE NO OF STUDENTS TO BE DISPLAY:");
            scanf("%d",&n1);
            printf("\n %d PHYSICS TOPPERS",n1);
            for(i=0;i<n1;i++)
            {
               printf("\n%d.\n Roll no:%d\n Name:%s\nPhysics:%f",i+1,st[i].rollno,st[i].name,st[i].phy);
            }
            break;
         }
         case 7:
         {
            struct student temp;
            for(i=0;i<n;i++)
            {
               for(j=i+1;j<n;j++)
               {
                  if(st[i].chem<st[j].chem)
                  {
                     temp=st[i];
                     st[i]=st[j];
                     st[j]=temp;
                  }
               }
            }
            printf("\nENTER THE NO OF STUDENTS TO BE DISPLAY:");
            scanf("%d",&n1);
            printf("\n %d CHEMISTRY TOPPERS",n1);
            for(i=0;i<n1;i++)
            {
               printf("\n%d.\n Roll no:%d\n Name:%s\nChemistry:%f",i+1,st[i].rollno,st[i].name,st[i].chem);
            }
            break;
         }
         case 8:
         {
            struct student temp;
            for(i=0;i<n;i++)
            {
               for(j=i+1;j<n;j++)
               {
                  if(st[i].proginc<st[j].proginc)
                  {
                     temp=st[i];
                     st[i]=st[j];
                     st[j]=temp;
                  }
               }
            }
            printf("\nENTER THE NO OF STUDENTS TO BE DISPLAY:");
            scanf("%d",&n1);
            printf("\n %d PROGINC TOPPERS",n1);
            for(i=0;i<n1;i++)
            {
               printf("\n%d.\n Roll no:%d\n Name:%s\nProg in C:%f",i+1,st[i].rollno,st[i].name,st[i].proginc);
            }
            break;
         }
         case 9:
         {
            struct student temp;
            for(i=0;i<n;i++)
            {
               for(j=i+1;j<n;j++)
               {
                  if(st[i].civmech<st[j].civmech)
                  {
                     temp=st[i];
                     st[i]=st[j];
                     st[j]=temp;
                  }
               }
            }
            printf("\nENTER THE NO OF STUDENTS TO BE DISPLAY:");
            scanf("%d",&n1);
            printf("\n %d CIVIL&MECH TOPPERS",n1);
            for(i=0;i<n1;i++)
            {
               printf("\n%d.\n Roll no:%d\n Name:%s\nCivil&Mech:%f",i+1,st[i].rollno,st[i].name,st[i].civmech);
            }
            break;
         }
         case 10:
            break;
         default:
            printf("INVALID CHOICE");
      }
   }while(choice!=10);
   return 0;
}

/*OUTPUT
ENTER THE NUMBER OF STUDENTS:2
Enter the records of student 1
Enter the roll number:65

Enter the name:aarthy

Enter the marks in English,maths,physics,chemistry,proginc,civmech:90
90
90
90
90
90
Enter the records of student 2
Enter the roll number:66

Enter the name:abi

Enter the marks in English,maths,physics,chemistry,proginc,civmech:90
80
80
80
80
80

 .....YOUR MENU .....
1.Display details
2.Toppers
3.Slow learners
4.English toppers
5.Maths toppers
6.Physics toppers
7.Chemistry toppers
8. Prog in C toppers
9.Civil&Mech toppers
10.Exit
ENTER YOUR CHOICE:80
INVALID CHOICE
 .....YOUR MENU .....
1.Display details
2.Toppers
3.Slow learners
4.English toppers
5.Maths toppers
6.Physics toppers
7.Chemistry toppers
8. Prog in C toppers
9.Civil&Mech toppers
10.Exit
ENTER YOUR CHOICE:1

Enter the roll number:65

THE DETAILS ARE.....
 Roll no:65
 Name:aarthy
 ...MARKS...
 English:90.000000
Maths:90.000000
Physics:90.000000
Chemistry:90.000000
Prog in C:90.000000
Civil&Mech:90.000000
Total:540.000000
Average:90.000000
 .....YOUR MENU .....
1.Display details
2.Toppers
3.Slow learners
4.English toppers
5.Maths toppers
6.Physics toppers
7.Chemistry toppers
8. Prog in C toppers
9.Civil&Mech toppers
10.Exit
ENTER YOUR CHOICE:2

ENTER THE NO OF STUDENTS TO BE DISPLAY:2

TOP 2 TOPPERS
1.
 Roll no:65
 Name:aarthy
Total:540.000000
Average:90.000000
2.
 Roll no:66
 Name:abi
Total:490.000000
Average:81.666664
 .....YOUR MENU .....
1.Display details
2.Toppers
3.Slow learners
4.English toppers
5.Maths toppers
6.Physics toppers
7.Chemistry toppers
8. Prog in C toppers
9.Civil&Mech toppers
10.Exit
ENTER YOUR CHOICE:8

ENTER THE NO OF STUDENTS TO BE DISPLAY:2

 2 PROGINC TOPPERS
1.
 Roll no:65
 Name:aarthy
Prog in C:90.000000
2.
 Roll no:66
 Name:abi
Prog in C:80.000000
 .....YOUR MENU .....
1.Display details
2.Toppers
3.Slow learners
4.English toppers
5.Maths toppers
6.Physics toppers
7.Chemistry toppers
8. Prog in C toppers
9.Civil&Mech toppers
10.Exit
ENTER YOUR CHOICE:10 */

