cases = int(input())

for x in range(cases):
   first = input()
   second = input()
   result = ""
   
   for i in range(len(first)):
      if first[i] == second[i]:
         result += "."
      else:
         result += "*"
         
   print(first)
   print(second)
   print(result)
   print()