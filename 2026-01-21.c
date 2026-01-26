//Code to calculate and get Grade according to the marks(out of 100) entered.

#include<stdio.h>
int main(){
    int marks;
   
    printf("enter marks:");
    scanf("%d",&marks);
        
        while(marks <0 || marks >100){
        printf("Invalid Marks");
        printf("Re-enter marks:");
        scanf("%d",&marks);
      }

        switch(marks/10){
      
       case 10:
        printf("Grade = A+\n");
        break;

       case 9:
        printf("Grade = A\n");
        break;

       case 8:
        printf("Grade = B+\n");
        break;

       case 7: 
        printf("Grade = B\n");
        break;
       
       case 6:
        printf("Grade = C\n");
        break;

       case 5:
        printf("Grade = D\n");
        break;

       default:
        printf("Fail\n");
       }
    

return 0;
}


