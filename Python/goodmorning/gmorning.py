test = {"1" : "1234567890",
        "2" : "2356890",
        "3" : "369",
        "4" : "4567890",
        "5" : "56890",
        "6" : "69",
        "7" : "7890",
        "8" : "890",
        "9" : "9",
        "0" : "0"}

cases = int(input())

for x in range(cases):
   num = int(input())
   
   looking = [num]
   visited = set()
   visited.add(num)
   
   while True:
      curr = int(looking.pop(0))
      string = str(curr)
      
      if len(string) == 1:
         print(string)
         break
      
      if len(string) == 2:
         if string[1] in test[string[0]]:
            print(string)
            break
      
      if len(string) == 3:
         if string[1] in test[string[0]] and string[2] in test[string[1]]:
            print(string)
            break
               
      if not (curr + 1) in visited:
         visited.add(curr + 1)
         looking.append(curr + 1)
         
      if not (curr - 1) in visited:
         visited.add(curr - 1)
         looking.append(curr - 1)