def choclates(a,n):
    a.sort(reverse=True)
    length=len(a)
    c=0
    i=0
    ans=10000000000
    while c<(length-n)+1:
        h=a[i]
        l=a[i+(n-1)]
        d=h-l
        if d<ans:
            ans=d
            c+=1
            i=c
        else:
            c+=1
            i=c
    return(ans)
t=int(input())
for i in range(t):
    size=int(input())
    arr=[int(x) for x in input().split()]
    students=int(input())
    print(choclates(arr,students))
    
