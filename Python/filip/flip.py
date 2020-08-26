ab = input().split()
af = ab[0]
bf = ab[1]

a = str(af[2]) + af[1] + af[0]
b = str(bf[2]) + bf[1] + bf[0]

if a > b:
   print(a)
else:
   print(b)