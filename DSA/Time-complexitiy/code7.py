L = [1,2,3,4,5]
for i in range(0, len(L)):
    for j in range(i+1, len(L)):
        print("{{{},{}}}".format(L[i], L[j]))


# 1st loop runs n times o(n)
# 2nd loop runs n-1 times o(n-1)
# so total time complexity is O(n*(n-1)) = O(n^2-n) = o(n^2)