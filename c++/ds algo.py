# # This is an N-queen Algorithm 
# class solution:
#     def __init__(self):
#         self.MAX = 100    # size of array
#         self.A = [0]*self.MAX
        
#     def placement(self,i,j):    # to check if queen can be placed
#         for k in range(1,i):
#             if (self.A[k] == j) or abs(self.A[k] - j) == abs(k - i):
#                 return False
#         return True
    
#     def printplacedqueen(self,N):  # method for print the placed Queen
#         print('Arrangment--->')
#         print()
        
#         for i in range(1,N+1):
#             for j in range(1,N+1):
#                 if self.A[i] != j:
#                     print('\t_',end =' ')
#                 else:
#                     print('\tQ',end =' ')
#             print()
#             print()
        
#     def N_Queens(self,i,j):
#         for k in range(1,N+1):
#             if self.placement(i,k):
#                 self.A[i] = k
#                 if i == N:
#                     self.printplacedqueen(N)
#                 else:
#                     self.N_Queens(i+1,N)
                    
# N = 4

# Arrangment--->

#         _       Q       _       _ 

#         _       _       _       Q 

#         Q       _       _       _ 

#         _       _       Q       _ 

# Arrangment--->

#         _       _       Q       _ 

#         Q       _       _       _ 

#         _       _       _       Q 

#         _       Q       _       _ 

# obj = solution()        
# obj.N_Queens(1,N)
