queens = []
board = []
valid = True
j = 0

#input
for i in range(8):
   row = input()
   board.append(row)
   
for row in board:
   #row validity
   if row.count("*") > 1:
      valid = False
      break
   elif row.count("*") == 1:
      #index of queens is the row, the value of queens is the column
      queens.append(row.index("*"))
      
   j+=1
      
for queen in queens:
   #column validity
   if queens.count(queen) > 1:
      valid = False
      break
   
for row in range(8):
   k = 0
   for k in range(1,8):
      if len(queens) > row + k and queens[row] + k == queens[row + k]:
         valid = False
         break
      elif len(queens) > row + k and queens[row] - k == queens[row + k]:
         valid = False
         break

if valid:
   print("valid")
else:
   print("invalid")