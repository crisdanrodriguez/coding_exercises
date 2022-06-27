'''
Write a function that takes in a non-empty array of distinct integers and an integer representing a target sum.
If any two numbers in the input array sum up to the target sum, the function should return them in the array,
in any order. If no two numbers sum up to the target sum, the function should return an empty array.

Note: the target sum has to be obtained by summing two different integers in the array; yo can't add a single
integer to itself in order to obtain the target sum.
'''

def two_number_sum(array, targetSum):
    for number in array:
        number2 = targetSum - number
        if (number2 in array) and (number2 != number):
            return [number, number2]
    return []

if __name__ == '__main__':
    array = [3, 5, -4, 8, 11, 1, -1, 6]
    targetSum = 10

    print(two_number_sum(array, targetSum))

