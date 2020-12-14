for x in range(int(input())):
   max = 0
   total = 0
   winner = 0
   
   for y in range(int(input())):
      curr = int(input())
      total += curr
      
      if curr > max:
         winner = y + 1
         max = curr
      elif curr == max:
         winner = 0
         
   if winner == 0:
      print("no winner")
   elif max > total / 2:
      print("majority winner", winner)
   else:
      print("minority winner", winner)