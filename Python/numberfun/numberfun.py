cases = int(input())

for x in range(cases):
   nums = input().split()
   a = float(nums[0])
   b = float(nums[1])
   c = float(nums[2])
   
   if a + b == c:
      print("Possible")
      continue
   
   if a - b == c:
      print("Possible")
      continue
   
   if b - a == c:
      print("Possible")
      continue
   
   if a * b == c:
      print("Possible")
      continue
   
   if a / b == c:
      print("Possible")
      continue
   
   if b / a == c:
      print("Possible")
      continue
   
   print("Impossible")