arr = [1,2,3,4]
'''
for i in range(0,len(arr)):
  for j in range(0,len(arr)-i-1):
    if(arr[j] > arr[j+1]):
      temp = arr[j]
      arr[j]= arr[j+1]
      arr[j+1]=temp


'''
# in case of already sorted array we can optimise the runtime to O(n)
swap=0
for i in range(0,len(arr)):
  print("run : ",i)
  for j in range(0,len(arr)-i-1):
    if(arr[j] > arr[j+1]):
      temp = arr[j]
      arr[j] = arr[j+1]
      arr[j+1] = temp
      swap =1
  if(swap == 0):
    print("already sorted hai bhai")
    break
for i in range(0,len(arr)):
  print(arr[i])