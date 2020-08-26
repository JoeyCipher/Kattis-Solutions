cases = int(input())

for x in range(cases):
   num = int(input())
   
   looking = [num]
   visited = set()
   
   while True:
      curr = looking.pop(0)
      string = str(curr)
      if string[2::-1] == string[3:len(string)]:
         print(string)
         break
      else:
         if not (curr - 1) in visited:
            looking.append(curr - 1)
            visited.add(curr - 1)
         if not (curr + 1) in visited:
            looking.append(curr + 1)
            visited.add(curr + 1)