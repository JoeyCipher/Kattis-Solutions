line = input().split()
boxes = line[0:6]
h1 = int(line[6])
h2 = int(line[7])
box1 = list()

for i in range(6):
   for j in range(i+1,6):
      for k in range(j+1,6):
         boxset = int(boxes[i]) + int(boxes[j]) + int(boxes[k])
         if(boxset == h1):
            box1 = [int(boxes[i]), int(boxes[j]), int(boxes[k])]
         if(boxset == h2):
            box2 = [int(boxes[i]), int(boxes[j]), int(boxes[k])]
            
box1.sort()
box1.reverse()
box2.sort()
box2.reverse()
for a in box1:
   print(a, end=" ")
for b in box2:
   print(b, end=" ")
print()