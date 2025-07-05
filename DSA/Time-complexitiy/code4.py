def intToStr(i):
    digits = '0123456789'
    if i == 0:
        return '0'
    result = ''
    while i>0:
        result = digits[i % 10] + result
        i //= 10
    return result

print(intToStr(12345))  # Output: '12345'

# when there is division anywhere in code , # it is always O(log n) time complexity
# because the number of digits in a number n is log(n) base 10