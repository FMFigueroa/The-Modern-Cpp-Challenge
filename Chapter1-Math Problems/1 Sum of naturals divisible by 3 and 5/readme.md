## 1. Sum of naturals divisible by 3 and 5

### Write a program that calculates and prints the sum of all the natural numbers divisible by either 3 or 5, up to a given limit entered by the user.

### Solutions

#### 1. Sum of naturals divisible by 3 and 5 The solution to this problem is to iterate through all numbers from 3 (1 and 2 are not divisible by 3 so it does not make sense to test them) up to the limit entered by the user. Use the modulo operation to check that the rest of the division of a number by 3 and 5 is 0. However, the trick to being able to sum up to a larger limit is to use long long and not int or long for the sum, which would result in an overflow before summing up to 100,000:
