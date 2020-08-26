from queue import Queue

#Class that stores: current location, visited, and total minutes
class Info():
   def __init__(self, loc, vis, mins):
      self.loc = loc
      self.vis = vis
      self.mins = mins

nst = input().split()

n = int(nst[0])
car = int(nst[1])
dest = int(nst[2])
grid = list()
minutes = float("inf")
queue = Queue()

for x in range(n):
   line = input().split()
   grid.append(line)
   
queue.put(Info(car, set(), 0))

while not queue.empty():
   curr = queue.get()
   
   if curr.loc == dest:
      if curr.mins < minutes:
         minutes = curr.mins
      continue
   
   visited = curr.vis
   visited.add(curr.loc)
      
   for i in range(n):
      if i in visited:
         continue
      
      location = int(grid[curr.loc][i])
      if curr.mins + location > minutes:
         continue
      queue.put(Info(i, visited, curr.mins + location))
      
print(int(minutes))