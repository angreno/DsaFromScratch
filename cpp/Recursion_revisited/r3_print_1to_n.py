def name(i,n):
  if(i==n):
    return
  print(i*2-1)
  name(i=i+1,n=n)

name(1,6)
