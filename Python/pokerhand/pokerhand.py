card = input().split()
points = dict()
i = 0

while i < 5:
   if card[i][0] in points.keys():
      points[card[i][0]] += 1
      i += 1
   else:
      points[card[i][0]] = 1
      i += 1
      
print(max(points.values()))