input()

i = 0
a = input().split()

for x in a:
   if int(x) < 0:
      i += 1
      
print(i)