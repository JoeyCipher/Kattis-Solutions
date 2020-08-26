n,m = map(int, input().split())
heights = list(map(int, input().split()))
lumber = 0
maxh = max(heights)

while lumber < m:
   for i in range(n):
      if int(heights[i]) > maxh:
         cut = int(heights[i]) - maxh
         lumber += cut
         heights[i] = int(heights[i]) - cut
   
   if lumber >= m:
      print(maxh)
      break
   else:
      maxh -= 1
