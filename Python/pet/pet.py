points = []

for x in range(5):
   line = input().split()
   score = 0
   
   for num in line:
      score += int(num)
      
   points.append(score)
   
winScore = max(points)
print(points.index(winScore) + 1, winScore)