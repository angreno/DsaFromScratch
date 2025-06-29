def rev(a,i,n):
  if(i==len(a)/2):
    for i in range(0,len(a)):
      print(a[i])
    return
  temp = a[i]
  a[i]=a[n]
  a[n]=temp 
  rev(a=a,i=i+1,n=n-1)
a  = [1,2,3,4]
rev(a,0,3)
