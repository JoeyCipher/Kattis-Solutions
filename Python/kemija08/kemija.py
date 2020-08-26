line = str(input())
vowels = "aeiou"

for i in range(len(line)):
   good = i + 2 < len(line)
   if good and line[i] in vowels and line[i + 2] == line[i] and line[i + 1] == 'p':
      line = line[0:i + 1] + line[i + 3:]
   
print(line)