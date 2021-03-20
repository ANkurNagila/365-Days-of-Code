T=int(input())

for i in range(T):
    N,K=map(int,input().strip().split(" "))
    
    A=list(map(int,input().strip().split(" ")))[:N]
    sum=0
    for j in A:
        sum=sum+j
    
    if sum%K==0:
        print("0")
    else:
        print("1")
