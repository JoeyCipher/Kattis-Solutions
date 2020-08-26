def main():
   nums = input().split()

   if int(nums[0]) + int(nums[1]) == int(nums[2]):
      print(nums[0] + "+" + nums[1] + "=" + nums[2])
      return
   if int(nums[1]) + int(nums[2]) == int(nums[0]):
      print(nums[0] + "=" + nums[1] + "+" + nums[2])
      return
      
   if int(nums[0]) - int(nums[1]) == int(nums[2]):
      print(nums[0] + "-" + nums[1] + "=" + nums[2])
      return
   if int(nums[1]) - int(nums[2]) == int(nums[0]):
      print(nums[0] + "=" + nums[1] + "-" + nums[2])
      return

   if int(nums[0]) * int(nums[1]) == int(nums[2]):
      print(nums[0] + "*" + nums[1] + "=" + nums[2])
      return
   if int(nums[2]) * int(nums[1]) == int(nums[0]):
      print(nums[0] + "=" + nums[1] + "*" + nums[2])
      return
   
   if int(nums[0]) / int(nums[1]) == int(nums[2]):
      print(nums[0] + "/" + nums[1] + "=" + nums[2])
      return
   if int(nums[1]) / int(nums[2]) == int(nums[0]):
      print(nums[0] + "=" + nums[1] + "/" + nums[2])
      return
   
main()