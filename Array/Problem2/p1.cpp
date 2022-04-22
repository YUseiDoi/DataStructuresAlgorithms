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


// my answer: bruteforce

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
    int i, j, sumSubarray;
    for(size_t i = 0; i < numsSize; i++){
        sumSubarray = 0;
        for(size_t j = i; j < numsSize; j++){
            sumSubarray += nums[j];
            if(sumSubarray == 0){
                cout << "Subarray(" << i << ", " << j << ")" << endl;
            }
        }
    }
}