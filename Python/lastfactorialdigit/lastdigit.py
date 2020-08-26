def factorial(x):
   if x == 1:
      return 1
   else:
      return x * factorial(x - 1)

cases = int(input())

for x in range(cases):
   num = int(input())
   fact = factorial(num)
   string = str(fact)
   ans = string[-1]
   
   print(ans)