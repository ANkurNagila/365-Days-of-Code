def numbers(argument):
    switcher = {
        0: 6,
        1: 2,
        2: 5,
        3: 5,
        4: 4,
        5: 5,
        6: 6,
        7: 3,
        8: 7,
        9: 6,
    }
  
    return switcher.get(argument, "nothing")

for _ in range(int(input())):
    A,B=map(int,input().strip().split(" "))
    
    sum=A+B
    sum2=0
    while sum!=0:
        x=sum%10
        
        sum2+=numbers(x)
        sum=sum//10
    print(sum2)
        
        
