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
    int num[] = {5, 2, 6, 8, 1, 9};
    int target = 12;
    int i, j, tempNum, arraySize, pairNum;
    arraySize = sizeof(num) / sizeof(num[0]);
    for(size_t i = 0; i < arraySize; i++){    // sort
        for(size_t j = 0; j < arraySize; j++){
            if(num[i] > num[j]){
                tempNum = num[i];
                num[i] = num[j];
                num[j] = tempNum;
            }
        }
    }
    pairNum = 0;
    for(size_t i = 0; i < arraySize; i++){    // find a pair
        for(size_t j = 0; j < arraySize; j++){
            if(i >= j) continue;
            if(num[i] + num[j] == target){      // check if a sum is equal to target
                std::cout << num[i] << ", " << num[j] << std::endl;
                pairNum++;
                break;
            }
        }
    }
    if(pairNum == 0){
        std::cout << "Pair not found";
    }
}