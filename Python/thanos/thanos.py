worlds = int(input())

for x in range(worlds):
   info = input().split(" ")
   
   p = int(info[0])
   r = int(info[1])
   f = int(info[2])
   
   y = 0
   while(p <= f):
      y += 1
      p *= r
      
   print(y)