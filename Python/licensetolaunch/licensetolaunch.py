def main():
   input()
   days = input().split()
   index = 0

   for i in range(len(days)):
      if int(days[i]) < int(days[index]):
         index = i

   print(index)
   
main()