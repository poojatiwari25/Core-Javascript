#include <stdio.h>
#define size 8
int main() {
    int a[size],i,c=0,sum=0;
    float avg;
    printf("Enter an array:");
    for(i=1;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("All even numbers are:");
    for(i=0;i<size;i++)
    {
       if (a[i]%2==0)
       {
       printf("%d ",a[i]); 
       sum=sum+a[i];
       c++;
       }
    }
     if(c!=0)
     {
         avg=(float)sum/c;
         printf("\nsum of all values: %d",sum);
         printf("\naverage of all values: %.2f",avg);
         printf("\ntotal even numbers: %d",c);
     }
    else
     {
         printf("None");
     }
    
    return 0;
}





#include <stdio.h>
int main() {
   int a[10],i;
   int even=0,odd=0;
   printf("Enter elements of array");
   for(i=0;i<10;i++)
   {
       scanf("%d",&a[i]);
   if(a[i]%2==0)
   {
      even++;
   }
   else{
      odd++;
   }
   }
   printf("Total even no is %d",even);
   printf("\ntotal odd no is %d",odd);
    return 0;
}