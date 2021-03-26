for _ in range(int(input())):
    A=input()
    B=input()
    min=0
    max=0
    for i in range(len(A)):
        if A[i]!=B[i] and (A[i]!="?" and B[i]!="?"):
            min+=1
        
        elif (A[i]=="?" or  B[i]=="?"):
            max+=1
            
            
    max+=min 
    print(min,max)
