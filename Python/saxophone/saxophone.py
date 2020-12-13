fingerings = {
   'c' : [1,2,3,6,7,8,9],
   'd' : [1,2,3,6,7,8],
   'e' : [1,2,3,6,7],
   'f' : [1,2,3,6],
   'g' : [1,2,3],
   'a' : [1,2],
   'b' : [1],
   'C' : [2],
   'D' : [0,1,2,3,6,7,8],
   'E' : [0,1,2,3,6,7],
   'F' : [0,1,2,3,6],
   'G' : [0,1,2,3],
   'A' : [0,1,2],
   'B' : [0,1],
}

pressed = set()
count = [0,0,0,0,0,0,0,0,0,0]

for x in range(int(input())):
   for note in input():
      for finger in range(10):
         if finger in fingerings[note]:
            if finger not in pressed:
               count[finger] += 1
               pressed.add(finger)
         else:
            if finger in pressed:
               pressed.remove(finger)
   
   for finger in range(10):
         print(count[finger], end = " ")
   print()
   pressed = set()
   count = [0,0,0,0,0,0,0,0,0,0]