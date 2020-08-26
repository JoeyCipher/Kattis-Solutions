input()
worlds = input().split(" ")
killed = 0

for i in range(len(worlds)):
   if i == 0:
      continue
   
   if int(worlds[-i]) <= int(worlds[-i - 1]):
      diff = (int(worlds[-i - 1]) - int(worlds[-i])) + 1
      
      if int(worlds[-i - 1]) - diff <= 0:
         print(1)
         break
      
      worlds[-i - 1] = int(worlds[-i - 1]) - diff
      killed += diff
else:
   print(killed)