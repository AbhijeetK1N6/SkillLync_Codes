//Help the mathematics teacher to arrange the marks of the students in descending order,so that it will easier for her to print the rank list

#include<stdio.h>  //HEader file
int main()         //Main function starts here
{
    //Taking Marks Input from the user
    int arr[10],tempo1,tempo2,counter=0,ak[10];
    for(int i=0;i<10;i++){
        counter+=1;
        printf("Enter Student %d marks :- ",counter);
        scanf("%d",&tempo1);
        arr[i]=tempo1;
        tempo1=0;
        ak[i]=i;
    }
    //Bubble Sort to arrange marks in descending order
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(arr[i]>arr[j]){
                tempo1=arr[j];
                arr[j]=arr[i];
                arr[i]=tempo1;
                //Second Array to store Index of Marks
                tempo2=ak[j];
                ak[j]=ak[i];
                ak[i]=tempo2;
            }
        }
    }
    //Printing the Marks in Decending order
    counter=0;
    for(int i=0;i<10;i++){
        counter+=1;
        printf("Student %d has %d rank and has marks = %d\n",ak[i]+1,counter,arr[i]);
    }
    return 0;
}
