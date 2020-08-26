size = int(input())
total = 0

for i in range(size):
   a = str(input())
   num = a[0:-1]
   expo = a[-1]
   total += int(num) ** int(expo)
   
print(total)