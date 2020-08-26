stop = False

while stop != True:
   try:
      nums = input().split()
      print(abs(int(nums[0]) - int(nums[1])))
   except:
      stop = True