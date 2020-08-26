line = input().split()
right = 0
probs = {}
points = 0

while line[0] != "-1":
   if line[2] == "right":
      right += 1
      points += int(line[0])
      if line[1] in probs.keys():
         points += probs[line[1]]
      
   if line[2] == "wrong":
      if line[1] in probs.keys():
         probs[line[1]] += 20
      else:
         probs[line[1]] = 20
            
   line = input().split()
   
print(right, points)