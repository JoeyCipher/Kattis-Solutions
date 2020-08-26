import math

def diss(x1, y1, x2, y2):
   a = (int(x1) - int(x2))**2
   b = (int(y1) - int(y2))**2
   return(math.sqrt(a+b))

dn = input().split()

while dn[0] != "0.0" and dn[1] != "0":
   d = float(dn[0])
   n = int(dn[1])
   
   sweet = [True for i in range(n)]
   hives = dict()
   
   for j in range(n):
      curr = input().split()
      hives[j] = ((float(curr[0]), float(curr[1])))
      
   for first in range(n):
      for second in range(n):
         if first == second:
            continue
         
         if diss(hives[first][0], hives[first][1], hives[second][0], hives[second][1]) <= d:
            sweet[first] = False
            sweet[second] = False
         
   print(sweet.count(False), "sour,", sweet.count(True), "sweet")
   dn = input().split()