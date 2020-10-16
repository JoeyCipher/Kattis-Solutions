curr = list()
rem = 1.0
total = 0.0

n = int(input())

lis = list()

for x in range(n):
   curr = input().split()
   lis.append(float(curr[1]))

lis.sort()
#lis.reverse()
it = 0.0

for x in range(n):
   it = lis.pop()
   total += it*(x+1)
   rem -= it
   
print(total)