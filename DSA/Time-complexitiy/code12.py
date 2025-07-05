def fib(n):
    if n == 1 or n == 0:
        return 1
    else:
        return fib(n - 1) + fib(n - 2)


#i/p   1  2  3 5  6 (add)
#fcall 1  2  4 14 32 (mul)
# this is property of exponential
# time complexity is O(2^n) ---less than 2^n 
# this is because we are calling fib(n-1) and fib(n-2) in each call