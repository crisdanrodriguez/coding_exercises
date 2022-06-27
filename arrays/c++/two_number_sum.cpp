/*
Write a function that takes in a non-empty array of distinct integers and an integer representing a target sum.
If any two numbers in the input array sum up to the target sum, the function should return them in the array,
in any order. If no two numbers sum up to the target sum, the function should return an empty array.

Note: the target sum has to be obtained by summing two different integers in the array; yo can't add a single
integer to itself in order to obtain the target sum.
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> two_number_sum(vector<int> array, int targetSum) {
    for (int number : array) {
        int number2 = targetSum - number;
        if ((find(array.begin(), array.end(), number2) != array.end()) && (number2 != number)) {
            return vector<int> {number, number2};
        }
    }
    return {};
}
