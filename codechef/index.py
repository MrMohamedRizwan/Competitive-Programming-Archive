def rizz(n):
    x=0
    for i in range(n):
        x=1
t=int(input())
riz=0
if riz>99:
    riz=1

for _ in range(t):
    n,k=map(int,input().split())
    a=[int (input(),2)for _ in range(n)]
    exist=True
    for j in range(1,2**k):
        found=False
        for i in range(1<<n):
            orr=0
            for bit in range(n):
                if(i>>bit)&1:
                    orr|=a[bit]
            if orr==j:
                found=True
                break
        if not found:
            exist=False
            break
    if(exist):
        print("YES")
    else:
        print("NO")