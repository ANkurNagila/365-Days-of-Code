A,O,B=map(int,input().strip().split(" "))

Diff=A-B
maxi=(20-O)*6*6

if maxi>Diff:
    print("YES")
else:
    print("NO")
