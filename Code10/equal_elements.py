T=int(input())

for i in range(T):
    N=int(input())
    even=0
    odd=0
    ele=list(map(int,input().strip().split(" ")))

    for i in ele:
        if i%2==0:
            even+=1
        else:
            odd+=1

    
    if even<=odd:
        print(even)
    else:
        print(odd)

