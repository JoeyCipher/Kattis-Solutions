cases = int(input())

for x in range(cases):
   line = input().split()
   index = 0
   add = 0
   stu = int(line[index])
   
   for i in range(int(stu)):
      index += 1
      add += int(line[index])
      
   avg = add / stu
   index = 0
   aavg = 0
   
   for i in range(int(stu)):
      index += 1
      
      if int(line[index]) > avg:
         aavg += 1
      
   avg = aavg / stu
   ans = avg * 100
   
   #ans = '{:.4f}'.format(ans)
   print('{:.3f}'.format(ans) + "%")