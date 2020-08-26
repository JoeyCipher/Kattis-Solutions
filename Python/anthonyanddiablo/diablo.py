import math

numbers = input().split(" ")
a = float(numbers[0])
b = float(numbers[1])

radius = pow(a / math.pi, .5)

if 2 * math.pi * radius <= b:
   print("Diablo is happy!")
else:
   print("Need more materials!")