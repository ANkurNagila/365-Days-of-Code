# cook your dish here

T=int(input())

for _ in range(T):
    N=int(input())
    sum=0
    i=1
    while i<=N:
        sum=sum+ (N-i+1)*(N-i+1)
        i+=2
        
    print(sum)
