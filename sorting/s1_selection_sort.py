a = [13,46,24,52,20,9]
for i in range(0,len(a)):
  min = i
  for j in range(i+1,len(a)):
    if(a[j] < a[min]):
      min = j
  temp = a[i]
  a[i] =a[min]
  a[min] = temp

for i in range (0,len(a)):
  print(a[i])
