words = input().split(" ")
A = words[0]
B = words[1]

for char in A:
   if B.find(char) != -1:
      y = B.find(char)
      x = A.find(char)
      break
   
for i in range(len(B)):
   for j in range(len(A)):
      if i == y:
         print(A, end = "")
         break
      
      if j == x:
         print(B[i], end = "")
      else:
         print(".", end = "")
         
   print()