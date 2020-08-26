size = int(input())

for i in range(size):
   nums = input().split()
   woad = int(nums[0])
   wad = int(nums[1])
   cost = int(nums[2])
   
   if (wad - cost) > woad:
      print("advertise")
   elif (wad - cost) < woad:
      print("do not advertise")
   elif (wad - cost) == woad:
      print("does not matter")