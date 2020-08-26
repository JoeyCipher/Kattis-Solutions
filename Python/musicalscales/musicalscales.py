input()

keys = {
   "A" : {"A","B","C#","D","E","F#","G#"},
   "A#" : {"A","A#","C","D","D#","F","G"},
   "B" : {"A#","B","C#","D#","E","F#","G#"},
   "C" : {"A","B","C","D","E","F","G"},
   "C#" : {"A#","C","C#","D#","F","F#","G#"},
   "D" : {"A","B","C#","D","E","F#","G"},
   "D#" : {"A#","C","D","D#","F","G","G#"},
   "E" : {"A","B","C#","D#","E","F#","G#"},
   "F" : {"A","A#","C","D","E","F","G"},
   "F#" : {"A#","B","C#","D#","F","F#","G#"},
   "G" : {"A","B","C","D","E","F#","G"},
   "G#" : {"A#","C","C#","D#","F","G","G#"},
}

key = {
   "A" : True,
   "A#" : True,
   "B" : True,
   "C" : True,
   "C#" : True,
   "D" : True,
   "D#" : True,
   "E" : True,
   "F" : True,
   "F#" : True,
   "G" : True,
   "G#" : True,
}

notes = input().split()

for note in notes:
   if key["A"] == True and note not in keys["A"]:
      key["A"] = False
   if key["A#"] == True and note not in keys["A#"]:
      key["A#"] = False
   if key["B"] == True and note not in keys["B"]:
      key["B"] = False
   if key["C"] == True and note not in keys["C"]:
      key["C"] = False
   if key["C#"] == True and note not in keys["C#"]:
      key["C#"] = False
   if key["D"] == True and note not in keys["D"]:
      key["D"] = False
   if key["D#"] == True and note not in keys["D#"]:
      key["D#"] = False
   if key["E"] == True and note not in keys["E"]:
      key["E"] = False
   if key["F"] == True and note not in keys["F"]:
      key["F"] = False
   if key["F#"] == True and note not in keys["F#"]:
      key["F#"] = False
   if key["G"] == True and note not in keys["G"]:
      key["G"] = False
   if key["G#"] == True and note not in keys["G#"]:
      key["G#"] = False
      
empty = True
         
for val in key:
   if key[val] == True:
      print(val, end = " ")
      empty = False
      
if empty:
   print("none", end = "")
      
print()