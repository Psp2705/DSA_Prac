def fact(n):
    if n == 1:
        return 1
    else:
        return n * fact(n - 1)
    
print(fact(5))

# i/p =   5 10 100 200
# fcall = f5 10 100 200
# complexity - o(n)  linear