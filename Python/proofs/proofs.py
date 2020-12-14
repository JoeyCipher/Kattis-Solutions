correct = True
proven = set()

for x in range(int(input())):
   conclusion = False
   for word in input().split():
      if word == "->":
         conclusion = True
         continue
      if conclusion:
         proven.add(word)
         break
      if word not in proven:
         correct = False
   
   if not correct:
      print(x + 1)
      break

if correct:
   print("correct")