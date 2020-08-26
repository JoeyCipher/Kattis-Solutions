cases = int(input())

for i in range(cases):
   pairs = set()
   input()
   nums = input().split()
   
   for num in nums:
      if num in pairs:
         pairs.remove(num)
      else:
         pairs.add(num)
         
   print("Case #" + str(i + 1) + ": " + pairs.pop())