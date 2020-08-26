line = input().split()
power = 0

power += int(line[0]) * 3
power += int(line[1]) * 2
power += int(line[2])

if power >= 8:
   print("Province or ", end = "")
elif power >= 5:
   print("Duchy or ", end = "")
elif power >= 2:
   print("Estate or ", end = "")
   
if power >= 6:
   print("Gold")
elif power >= 3:
   print("Silver")
else:
   print("Copper")