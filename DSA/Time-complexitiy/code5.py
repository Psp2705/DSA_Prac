n = 1000
i = j = k = 0

# 2 4 8 (3)
# 2 4 8 16 32 64 (6)
# # 2 4 8 16 32 64 128 256 512 (9)


# for(i=n/2; i<=n; i++){
#      for(j=2; j<=n; j=j*2){
#         k= k+n/2
# }
# }

# n =      10  100  1000
# i/p=     3   6    9

# n=n*n and i=i+i which is O(log n)
# for loop 1 o(n/2) and for loop 2 o(log n)
# # O(n/2 * log n) = O(n log n)