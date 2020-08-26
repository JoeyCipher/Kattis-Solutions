dict = {}
name = ""

while name != "***":
   name = input()
   
   if name != "***":
      if name in dict:
         dict[name] += 1
      else:
         dict[name] = 1
         
top_vote = 0
winner = ""
   
for name in dict:
   if dict[name] > top_vote:
      top_vote = dict[name]
      winner = name
   elif dict[name] == top_vote:
      winner = "Runoff!"
      
print(winner)