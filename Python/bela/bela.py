hd = input().split()
hands = int(hd[0])
dom = hd[1]
total = 0

for i in range(hands * 4):
   card = input()
   
   if card[1] == dom:
      if card[0] == "A":
         total += 11
         continue
      
      if card[0] == "K":
         total += 4
         continue
      
      if card[0] == "Q":
         total += 3
         continue
      
      if card[0] == "J":
         total += 20
         continue
      
      if card[0] == "T":
         total += 10
         continue
      
      if card[0] == "9":
         total += 14
         
   else:
      if card[0] == "A":
         total += 11
         continue
      
      if card[0] == "K":
         total += 4
         continue
      
      if card[0] == "Q":
         total += 3
         continue
      
      if card[0] == "J":
         total += 2
         continue
      
      if card[0] == "T":
         total += 10
         continue
      
print(total)