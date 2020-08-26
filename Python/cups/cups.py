dic = {}
nums = "1234567890"

cups = int(input())

for i in range(cups):
   line = input().split()
   a = line[0]
   b = line[1]
   
   if a[0] in nums:
      dic[int(a) / 2] = b
   else:
      dic[int(b)] = a
      
for key in sorted(dic.keys()):
   print(dic[key])