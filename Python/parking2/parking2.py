cases = int(input())

for x in range(cases):
   input()
   locs = input().split()
   
   ans = 0
   lsum = 0
   small = float('inf')
   big = float('-inf')
   
   for loc in locs:
      num = int(loc)
      lsum += num
      
      if num < small:
         small = num
      if num > big:
         big = num
      
   avg = lsum // len(locs)
   
   ans += (avg - small) * 2
   ans += (big - avg) * 2
   print(ans)