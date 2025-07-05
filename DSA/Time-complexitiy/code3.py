# Linear search

L = [1, 2, 3, 4, 5]
key = 4

for i in L: 
    if L[i] == key:
        print("Element found at index:", i)
    else:
        print("Element not found")


# Time Complexity Analysis - O(n)
# The time complexity is O(n) because in the worst case, we may have to check