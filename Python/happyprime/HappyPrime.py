def happy(num, seen):
   total = 0
      
   for curr in list(str(num)):
      total += int(curr)**2
      
   if total == 1:
      return True
   elif total in set(seen):
      return False
   else:
      set(seen).add(total)
      return happy(str(total), set(seen))

prime = [True for idk in range(10001)]

for x in range(10000):
   if prime[x] == False:
      continue
   if x <= 1:
      prime[x] = False
      continue
   
   for mults in range(x**2, 10000, x):
      prime[mults] = False
      
prime[10000] = False
prime[0] = False
prime[1] = False
      
cases = int(input())

for idk in range(cases):
   line = input().split()
   num = int(line[1])
   
   if prime[num] == False:
      print((idk + 1), num, "NO")
      continue
   else:
      if bool(happy(str(num), set())):
         print((idk + 1), num, "YES")
      else:
         print((idk + 1), num, "NO")