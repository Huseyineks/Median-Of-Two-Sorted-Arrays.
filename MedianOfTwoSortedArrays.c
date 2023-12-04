#include <stdio.h>
#include <stdlib.h>

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
   double median = 0; 
   
   int mergedarray[nums1Size+nums2Size];
   int i,j;
   for(i=0; i<nums1Size;i++){
         	
       mergedarray[i] = nums1[i];
       median += nums1[i];
       
       
       
   }
   
   int k = nums1Size;
   for(j=0;j<nums2Size;j++){
     mergedarray[k] = nums2[j];
     median += nums2[j];
     
     k++;
   }
  
   int totalsize = nums1Size+nums2Size;
   int temp;
   for(i = 0; i < totalsize;i++){
       
       for(j = 0; j < totalsize; j++){
           if (mergedarray[i] > mergedarray[j] && j>i){
		   
           temp = mergedarray[j];
           // 1 3 2 6 5
           mergedarray[j] = mergedarray[i];
           mergedarray[i] = temp;
       }
   }}
   if (totalsize % 2 == 1 ){
   	median = mergedarray[(totalsize-1)/2];
   	return median;
   }
   else{
   	median = mergedarray[totalsize/2] + mergedarray[(totalsize/2)-1];
   	return median/2;
   
   }
   
   
   
    
}

int main(int argc, char *argv[]) {
	int array1[] = {1,2,9,10};
	int array2[] = {3,4,8,11};
	int array1Size = sizeof(array1) / sizeof(array1[0]);
	int array2Size = sizeof(array2) / sizeof(array2[0]);
	
	double median = findMedianSortedArrays(array1, array1Size, array2, array2Size);
	printf("%lf",median);
	return 0;
}
