#include<stdio.h>
int main(){

  char name[10][30], subject[10][20][30];
  int n ,i,t,r,roll[10],mark[10][20],Totalmark=0,Avgmark;
  printf("Enter the number of student you want to keep the record of:");
  scanf("%d",&n);
  printf("\n");
  //For taking the records//
 
  for(i=1;i<=n;i++)
  {
    printf("Enter name of  student %d:",i);
    scanf("%s",name[i]);
    printf("Enter roll of %s :",name[i]);
    scanf("%d",&roll[i]);
    printf("Enter the number of subject you want to enter for %s:",name[i]);
     scanf("%d",&r);

    for(t=1;t<=r;t++)
    {
      printf("Enter the name of subject %d:",t);
      scanf("%s",subject[i][t]);
      printf("Enter the mark of %s:",subject[i][t]);
      scanf("%d",&mark[i][t]);
    }
     printf("\n");
  }

  //For printing the records//
   for(i=1;i<=n;i++)
  {
     printf("The detail of student %d is:\n",i);
    printf("Name of student is: %s\n",name[i]);
    printf("Roll of %s  is: %d\n",name[i],roll[i]);
    for(t=1;t<=r;t++)
    {
      printf("Name of subject is: %s\n",subject[i][t]);
      printf("Mark of %s is : %d\n",subject[i][t],mark[i][t]);
      Totalmark=Totalmark+mark[i][t];
    }
     
      printf("Total mark=%d\n",Totalmark);
       Avgmark= Totalmark/r;
       printf("Avg mark=%d\n",Avgmark);
           for(t=1;t<=r;t++)
               {
                 if(mark[i][t]>=27)
                    {
                     printf("You passed in  %s\n",subject[i][t]);
                    }
                 else{
                      printf("You failed in  %s\n",subject[i][t]);
                    }
                 } 
                 printf("\n");         
       }

       return 0;
}