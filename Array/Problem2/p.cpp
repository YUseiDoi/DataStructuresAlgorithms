/*
https://www.techiedelight.com/check-subarray-with-0-sum-exists-not/

Check if a subarray with 0 sum exists or not
Given an integer array, check if it contains a subarray having zero-sum.

For example,

Input:  { 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 }
 
Output: Subarray with zero-sum exists
 
The subarrays with a sum of 0 are:
 
{ 3, 4, -7 }
{ 4, -7, 3 }
{ -7, 3, 1, 3 }
{ 3, 1, -4 }
{ 3, 1, 3, 1, -4, -2, -2 }
{ 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 }
Note that the problem deals with subarrays that are contiguous, i.e., whose elements occupy consecutive positions in the array.

*/

#include <stdio.h>
#include <iostream>
using namespace std;

void findSubarrays(int nums[], int numsSize);

int main(){
    int nums[] = {3, 4, -7, 3, 1, 3, 1, -4, -2, -2};
    int numsSize = sizeof(nums)/sizeof(nums[0]);
    findSubarrays(nums, numsSize);
}

void findSubarrays(int nums[], int numsSize){
    int i, j, k, sumSubarray;
    int numsResult[] = {};
    for(size_t i = 0; i < numsSize; i++){
        for(size_t j = 0; j < numsSize - i; j++){
            sumSubarray = 0;
            for(size_t k = j; k < j + i + 1; k++){
                sumSubarray += nums[k];
                numsResult[k] = nums[k];
            }
            if(sumSubarray == 0){
                cout << "Find the Pair";
            }
        }
    }
}