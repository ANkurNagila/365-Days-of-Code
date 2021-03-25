def tri(N):
    if N<4:
        return 0
    else:
        return (N//2) - 1 + tri(N-2)

T=int(input())
for i in range(T):
    N=int(input())
    
    print(tri(N))
    
