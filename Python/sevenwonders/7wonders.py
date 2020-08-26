line = str(input())
points = 0
cards = {
   'T': 0,
   'C': 0,
   'G': 0,
}

for char in line:
   if char == 'T':
      cards['T'] += 1
   elif char == 'C':
      cards['C'] += 1
   elif char == 'G':
      cards['G'] += 1
      
points += (cards['T'] ** 2)
points += (cards['C'] ** 2)
points += (cards['G'] ** 2)

points += (min(cards.values()) * 7)
print(points)