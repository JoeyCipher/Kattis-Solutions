uatts = input()
atts = uatts.split()
key = dict()
songs = list(list())

for x in range(len(atts)):
   key[atts[x]] = x
   
for x in range(int(input())):
   songs.append(input().split())
   
for x in range(int(input())):
   att = key[input()]
   
   for y in range(1, len(songs)):
      curr = songs[y]
      z = y - 1 

      while z >= 0 and songs[z][att] > curr[att]:
         songs[z+1] = songs[z]
         z -= 1
      songs[z + 1] = curr
      
   print(uatts)
   for song in songs:
      for part in song:
         print(part, end=" ")
      print()
   print()