def divide(dividend, divisor):
    sign = -1 if ((dividend < 0) ^  (divisor < 0)) else 1
    quotient = 0
    while (dividend >= divisor):
        dividend -= divisor
        quotient += 1
    return sign * quotient


N=int(input())
for i in range(1,N+1):
    count=0
    for j in range(2,int(i**1/2)+1):
        if i-j*divide(i,j)==0:
            count+=1
    if count==0:
        print(i,end=" ")
