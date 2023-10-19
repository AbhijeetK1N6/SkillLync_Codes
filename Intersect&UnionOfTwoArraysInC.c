#include<stdio.h>
int removerepeated(int size,int a[])
{
 int i,j,k;
 for(i=0;i<size;i++)
  {
 for(j=i+1;j<size;)
 {
    if(a[i]==a[j])
    {
     
     for(k=j;k<size;k++)
     {
      a[k]=a[k+1];
     }
         size--;
        }
    else
    {
      j++;
     } 
 }
 }
return(size);
}

void sort(int size,int a[])
{
 int i,j,temp;
   for(i=0;i<size;i++)
   {
 for(j=i+1;j<size;j++)
 {
  if(a[i]>a[j])
  {
   temp=a[i];
   a[i]=a[j];
   a[j]=temp;
  }
 }
   }
}

main()
{
 int i,size1,size2,size,j=0,k,intersectionsize;
 int intersection[intersectionsize];
 printf("****************************************************\n");
 printf("Enter the Size of Array-1\n");
 scanf("%d",&size1);
 printf("Enter the Size of Array-2\n");
 scanf("%d",&size2);
 int a[size1],b[size2],uni[size1+size2];
 if(size1<size2)
 {
  intersectionsize=size1;
 }
 else if(size1>size2)
 {
  intersectionsize=size2;
 }
 else
 {
  intersectionsize=size1;
 }
 printf("****************************************************\n");
 printf("Enter the Elements of Array-1\n");
 for(i=0;i<size1;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("Enter the Elements of Array-2\n");
 for(i=0;i<size2;i++)
 {
  scanf("%d",&b[i]);
 }
 //union start here
 for(i=0;i<size1;i++)
 {
  uni[j]=a[i];
  j++;
 }
 for(i=0;i<size2;i++)
 {
  uni[j]=b[i];
  j++;
 }
 printf("****************************************************\n");
 //Sorting starts here
sort(size1+size2,uni);
//Remove repeated elements
size=removerepeated(size1+size2,uni);

 printf("UNION of Array-1 and Array-2 \n");
  for(i=0;i<size;i++)
 {
  printf("%d\n",uni[i]);
 }
 //Intersection starts
 k=0;
 for(i=0;i<size1;i++)
 {
  for(j=0;j<size2;j++)
  {
   if(a[i]==b[j])
   {
    intersection[k]=a[i];
    k++;
   }
   
  }
 }
 //Sorting
sort(k,intersection);
//Removing
 size=removerepeated(k,intersection);
 if(size>0)
 {
     printf("INTERSECTION of Array-1 and Array-2\n");
  for(i=0;i<size;i++)
 {
  printf("%d\n",intersection[i]);
 } 
 printf("****************************************************\n");
 }
 else
 {
  printf("INTERSECTION Not Possible\n");
 }
 printf("****************************************************\n");
}

