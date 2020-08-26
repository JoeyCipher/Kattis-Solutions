dic = {
   "a" : "@",
   "b" : "8",
   "c" : "(",
   "d" : "|)",
   "e" : "3",
   "f" : "#",
   "g" : "6",
   "h" : "[-]",
   "i" : "|",
   "j" : "_|",
   "k" : "|<",
   "l" : "1",
   "m" : "[]\/[]",
   "n" : "[]\[]",
   "o" : "0",
   "p" : "|D",
   "q" : "(,)",
   "r" : "|z",
   "s" : "$",
   "t" : "']['",
   "u" : "|_|",
   "v" : "\/",
   "w" : "\/\/",
   "x" : "}{",
   "y" : "`/",
   "z" : "2"
}

line = str(input())
output = str()

for i in line:
   if i.lower() in dic:
      output += dic[i.lower()]
   else:
      output += i
      
print(output)