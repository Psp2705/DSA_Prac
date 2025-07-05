A = [1,2,3,4]
B = [2,3,4,5,6]

for i in A:
    for j in B:
        if i < j:
            print("{{{},{}}}".format(i, j))

# loop 1 runs n times o(n)
# loop 2 runs m times o(m)
# so total time complexity is O(n*m)