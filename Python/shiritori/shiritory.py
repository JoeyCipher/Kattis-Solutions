list = set()
cases = int(input())
fair = True

for i in range(cases):
   curr = input()
   
   if curr in list:
      if i % 2 == 0:
         print("Player 1 lost")
      else:
         print("Player 2 lost")
      break
   
   list.add(curr)
   
   if i != 0:      
      if lLetter != curr[0]:
         fair = False
         
   index = len(curr) - 1
   lLetter = curr[index]
      
   if i == (cases - 1):
      if fair:
         print("Fair Game")
      elif i % 2 == 0:
         print("Player 1 lost")
      else:
         print("Player 2 lost")