A = [1,2,3,4]
B = [2,3,4,5]

for i in A:
    for j in B:
        for k in range(100000):
            print("{{{},{}}}".format(i, j))

# loop 1 runs n times o(n)
# loop 2 runs m times o(m)  
# loop 3 runs 100000 times o(100000)= o(1)
# so total time complexity is O(n*m*1) = O(n*m)