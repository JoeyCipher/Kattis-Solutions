def main():
   max = 1001
   mid = 500
   min = 1
   response = ""

   while response != "correct":
      print(mid)
      response = str(input())
      
      if response == "higher":
         min = mid
         mid = (mid + max) // 2
      elif response == "lower":
         max = mid
         mid = (mid + min) // 2
      else:
         continue
      
if __name__ == "__main__":
    main()