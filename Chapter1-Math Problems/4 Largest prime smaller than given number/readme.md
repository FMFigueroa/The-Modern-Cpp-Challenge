### 4. Largest prime smaller than given number

### Write a program that computes and prints the largest prime number that is smaller than a number provided by the user, which must be a positive integer.

### Solutions

### prime number is a number that has only two divisors, 1 and the number itself. To find the largest prime smaller than a given number you should first write a function that determines if a number is prime and then call this function, starting from the given number, towards 1 until the first prime is encountered. There are various algorithms for determining if a number is prime. Common implementations for determining the primality appear as follows:
