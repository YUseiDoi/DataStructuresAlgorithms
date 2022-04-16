/* http://www.techiedelight.com/find-pair-with-given-sum-array/ */
/*
Find a pair with the given sum in an array
Given an unsorted integer array, find a pair with the given sum in it.

For example,

Input:
 
nums = [8, 7, 2, 5, 3, 1]
target = 10
 
Output:
 
Pair found (8, 2)
or
Pair found (7, 3)
 
 
Input:
 
nums = [5, 2, 6, 8, 1, 9]
target = 12
 
Output: Pair not found
*/

#include <stdio.h>
#include <iostream>

int main(){
    int num[] = {8, 7, 2, 5, 3, 1};
    int target = 10;
    int i, j, tempNum;
    for(size_t i = 0; i < sizeof(num); i++){    // sort
        if(i < sizeof(num)-1 && num[i] > num[i+1]){
            tempNum = num[i];
            num[i] = num[i+1];
            num[i+1] = tempNum;
        }
    }
    for(size_t i = 0; i < sizeof(num); i++){    // find a pair
        for(size_t j = 1; j < sizeof(num); j++){
            if(num[i] + num[j] == target){      // check if a sum is equal to target
                std::cout << i << ", " << j << std::endl;
            }
        }
    }
}