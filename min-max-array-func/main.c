//
//  main.c
//  min-max-array-func
//
//  Created by Peter Rodriguez.
//
/*

 Read values into an array.
 Then print the values of Max and Min in main.
 
 */
#include <stdio.h>

int findMaxElem(int [], int);
int findMinElem(int [], int);

int main() {
    
    int MAX = 0;
    int arr1[MAX], mxelem, i, n, mnelem;
       printf("\n\n Function - get largest element of an array \n");
       printf("-------------------------------------------------\n");

           printf(" Input the number of elements to be stored in the array :");
           scanf("%d",&n);
       
           printf(" Input %d elements in the array :\n",n);
           for(i=0;i<n;i++)
            {
             printf(" element - %d : ",i);
             scanf("%d",&arr1[i]);
           }
        mxelem = findMaxElem(arr1,n);
        mnelem = findMinElem(arr1, n);
    
        printf(" The largest element in the array is : %d\n\n",mxelem);
        printf(" The smallest element in the array is: %d\n", mnelem);
        return 0;
    }
     
int findMaxElem(int arr1[],int n1)
    {
    int i=1, mxelem;
        mxelem=arr1[0];
        while(i < n1)
       {
          if(mxelem<arr1[i])
               mxelem=arr1[i];
          i++;
        }
        return mxelem;
}

int findMinElem(int arr2[], int n2){
    int i = 1;
    int mnelem;
    mnelem=arr2[0];
    while(i< n2)
    {
        if(mnelem>arr2[i])
            mnelem= arr2[i];
        i++;
    }
    return mnelem;
}

