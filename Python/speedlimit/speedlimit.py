sets = input()

while sets != "-1":
   ptime = 0
   dist = 0
   
   for x in range(int(sets)):
      nums = input().split()
      dist += int(nums[0]) * (int(nums[1]) - ptime)
      ptime = int(nums[1])
      
   print(dist, "miles")
   sets = input()
   