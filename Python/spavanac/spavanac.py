line = input().split()
h = int(line[0])
m = int(line[1])
m -= 45

if m < 0:
   m += 60
   if h == 0:
      h = 23
   else:
      h -= 1
      
print(h, m)