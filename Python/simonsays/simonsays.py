#https://open.kattis.com/problems/simonsays

commands = int(input())

for i in range(commands):
   order = input()
   
   if order[0:10] == "Simon says":
      print(order[10:])