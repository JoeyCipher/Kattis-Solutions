size = int(input())

for i in range(size):
   num = int(input())
   
   if num % 2 == 0:
      print(str(num) + " is even")
   else:
      print(str(num) + " is odd")