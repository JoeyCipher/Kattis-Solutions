a = input().split()
b = input().split()
c = input().split()

if a[0] == b[0] and a[0] == c[0]:
   print(a[0], end=" ")
else:
   if a[0] == b[0]:
      print(c[0], end = " ")
   elif a[0] == c[0]:
      print(b[0], end = " ")
   else:
      print(a[0], end = " ")
      
if a[1] == b[1] and a[1] == c[1]:
   print(a[1], end=" ")
else:
   if a[1] == b[1]:
      print(c[1])
   elif a[1] == c[1]:
      print(b[1])
   else:
      print(a[1])