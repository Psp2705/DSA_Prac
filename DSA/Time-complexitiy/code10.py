L = [1,2,3,4,5]

for i in range(0, len(L)//2):
    other = len(L) - i - 1
    temp = L[i]
    L[i] = L[other]
    L[other] = temp 

print(L)

# loop runs n/2 times o(n/2)
# so total time complexity is O(n/2) = O(n)
# this is because we are swapping the first and last element, second and second last element and so on
# so we only need to loop through half of the list