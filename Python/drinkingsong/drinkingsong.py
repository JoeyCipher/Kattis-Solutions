n = int(input())
drink = input()

for x in range(n, 0, -1):
   if x == 2:
      print("2 bottles of", drink, "on the wall, 2 bottles of", drink, end =".\n")
      print("Take one down, pass it around, 1 bottle of", drink, "on the wall.")
      print()
   elif x == 1:
      print("1 bottle of", drink, "on the wall, 1 bottle of", drink, end = ".\n")
      print("Take it down, pass it around, no more bottles of", drink, end = ".\n")
   else:
      print(x, "bottles of", drink, "on the wall,", x, "bottles of", drink, end = ".\n")
      print("Take one down, pass it around,", x-1, "bottles of", drink, "on the wall.")
      print()