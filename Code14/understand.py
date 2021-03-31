import math
Test=int(input())

while Test>0:
    S=int(input())

    x=int(math.log(S,2))+1
    print(x)
    y=int(x/2)

    print(y)

    res=int("1"+("0"*(y-1)),2)

    t=S/res

    print(t)

    Test-=1
