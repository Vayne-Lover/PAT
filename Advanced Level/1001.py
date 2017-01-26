input=raw_input().split()
temp=int(input[0])+int(input[1])
result=[]
if temp>=0:
  flag=True
else:
  flag=False
  temp=-temp
while temp>=1000:
    last=temp%1000
    result.append(last)
    temp/=1000
result.append(temp)
length=len(result)

if flag:
    final=""
else:
    final="-"
if length==1:
    final+=str(result[0])
else:
    result[length-1] = str(result[length-1])
    #print result
    for i in range(length-1):
        if result[i]<100 and result[i]>10:
            result[i] = "0"+str(result[i])
        elif result[i]<=10 and result[i]>0:
            result[i] = "00" + str(result[i])
        elif result[i]==0:
            result[i] = "000"
        else:
            result[i] = str(result[i])
    #print result
    for i in range(length-1):
        final+=result[length-1-i]
        final+=","
    final+=str(result[0])

print(final)

