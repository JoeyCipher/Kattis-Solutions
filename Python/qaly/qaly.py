size = int(input())
total = 0

for i in range(size):
   a = input().split()
   total += float(a[0]) * float(a[1])
   
print(total)