T=int(input())

for _ in range(T):
    N,K=map(int,input().strip().split(" "))
    
    P=list(map(int,input().strip().split(" ")))[:N]
    sum1=0
    sum=0
    for i in P:
        if i>K:
            sum+=K
        else:
            sum+=i
        sum1+=i
        
    print(sum1-sum)
