com = str(input())
endings = list()
e = int(input())

for i in range(e):
   lines = input().split()
   
   for endin in lines:
      if com[-len(endin):] == endin:
         endings.extend(lines)
         
p = int(input())

for j in range(p):
   rhymes = False
   curr = input().split()
   last = str(curr[-1])
   
   for ending in endings:
      if last[-len(ending):] == ending:
         rhymes = True
         break
         
   if rhymes:
      print("YES")
   else:
      print("NO")