// Online C compiler to run C program online
#include <stdio.h>
#include <limits.h>

void subarray(int * arr, int size, int k){
    int start = 0, i = 0;
    int sum = 0;
    int maxSum = 0;
    
    for(i=0; i < size; i++){
        sum = sum + arr[i];
        printf("hi\n");
        if(i >= k-1){
            printf("Sum = %d at start = %d \n", sum, start );
            if(sum > maxSum)
                maxSum  = sum;
            sum = sum - arr[start];
            
            start = start +1;
        }
        
    }
    printf("MaxSum = %d \n", maxSum);
}
int smallLengthSubarraySum(int arr[], int n, int S)
{
    int i;
    int wstart = 0, len = INT_MAX;
    int subSum = 0;

    for(i = 0; i < n; i++)
    {
        subSum += arr[i]; //{1,2,2,3,4,-2,-1,6,7,8};

        printf("sumSum = %d i = %d wstart = %d\n", subSum, i, wstart);
        while(subSum >= S)
        {
            int currentWindowSize = i - wstart + 1;

            if(currentWindowSize < len)
                len = currentWindowSize;

            printf("while: sunSum = %d wstart = %d i = %d \n", subSum, wstart, i);
            subSum -= arr[wstart];
            wstart++;
        }
    }

    return len == INT_MAX ? 0 : len;
}



int main() {
    // Write C code here
    printf("Try programiz.pro");

    
    
    int array[] = {1,2,2,3,4,-2,-1,6,7,8};
    subarray(array, 10, 3);
    smallLengthSubarraySum(array, 10, 9);
    return 0;
}
