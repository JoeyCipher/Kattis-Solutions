num = float(input())

fsteps = (num * 1000 * 5280) / 4854
intSteps = int(fsteps)

if fsteps - intSteps >= 0.5:
   print(intSteps + 1)
else:
   print(intSteps)