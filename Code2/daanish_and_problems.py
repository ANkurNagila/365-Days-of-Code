T=int(input())

for i in range(T):
    A=list(map(int,input().strip().split(" ")))

    K=int(input())

    A.reverse()

    for j in range(len(A)):
        if A[j]<K:
            K=K-A[j]
            A[j]=0

        elif A[j]>K:
            A[j]=A[j]-K
            K=0

        else:
            A[j]=0
            K=0

        if K==0 and A[j]!=0:
            print(10-j)
            break
