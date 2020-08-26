line = str(input())
ball = 1

for char in line:
   if char == "A":
      if ball == 1:
         ball = 2
      elif ball == 2:
         ball = 1
   elif char == "B":
      if ball == 3:
         ball = 2
      elif ball == 2:
         ball = 3
   elif char == "C":
      if ball == 1:
         ball = 3
      elif ball == 3:
         ball = 1
         
print(ball)