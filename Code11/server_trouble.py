T=int(input())

for _ in range(T):
    N,K=map(int,input().strip().split(" "))
    
    if N%K==0:
        print(N//K,K)
    else:
        print(N//K+1,N%K)
