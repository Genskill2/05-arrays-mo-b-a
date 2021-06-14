/* Enter your solutions in this file */
#include <stdio.h>
#include <assert.h>
#include <math.h>


int max(int [], int);
int min(int [], int);
float average(int [], int);
int mode(int [], int);
int factors(int, int []);

int max(int a[], int n)
{
    int max=a[0];
    for(int i=1;i<n;i++)
    {
       if(a[i]>max)
       {
         max=a[i];
        }
      }

   return max;

}

int min(int a[],int n)
{
   int min=a[0];
   for(int i=1;i<n;i++)
   {
      if(a[i]<min)
      {
         min=a[i];
      }
    }
    return min;
}


float average(int a[], int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
       sum+=a[i];
     }
     
     return sum/n;
}

int mode(int a[], int n)
{
   int max=0;
    int mode;
    
    if(n==1)
      return a[0];
    
    for(int i=0;i<n;i++)
    {
      int count=0;
      for(int j=i+1;j<n;j++)
      {
        if(a[i]==a[j])
        {
          count++;
         }
       }
       if(count>max)
       {
         max=count;
         mode=a[i];
        }
      }
     return mode; 
   
 }
       
 int factors(int n, int a[])  
 {
    int i=0;
  int x=sqrt(n);
  while(n%2==0)
      {
        a[i++]=2;
        
        n=n/2;
      }
   for(int j=3;j<=x;j+=2)
   {
      while(n%j==0)
      {
        a[i++]=j;
        
        n=n/j;
      }
      if(j%2==0 && j>2)
      {
      j++;
      }
   }
   if(n!=1)
     {
     a[i]=n;
     return i+1;
     }
     
     else
     return i;
 } 

