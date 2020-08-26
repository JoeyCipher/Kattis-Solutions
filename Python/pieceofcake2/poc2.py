nums = input().split()
size = int(nums[0])
hor = int(nums[1])
vert = int(nums[2])
maxh = 0
maxv = 0

if size - hor > hor:
   maxh = size - hor
else:
   maxh = hor
   
if size - vert > vert:
   maxv = size - vert
else:
   maxv = vert
   
print(maxv * maxh * 4)