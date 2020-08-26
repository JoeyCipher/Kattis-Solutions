code = list(input())
i = 0
days = 0

while ((i+1) * 3) <= len(code):
   if code[i*3] != 'P' and code[i*3] != 'p':
      days += 1
   
   if code[i*3+1] != 'E' and code[i*3+1] != 'e':
      days += 1
      
   if code[i*3+2] != 'R' and code[i*3+2] != 'r':
      days += 1
   
   i += 1
   
print(days)