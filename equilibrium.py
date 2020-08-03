// PROBLEM //
Given an array A of N positive numbers. The task is to find the position where equilibrium first occurs in the array. 
Equilibrium position in an array is a position such that the sum of elements before it is equal to the sum of elements after it.

// CODE //

T= int(input())
for i in range(T):
    N=int(input())
    A=list(map(int,input().split()))
    s=sum(A)
    r=s-A[0]
    l=0
    k=-1
    if(r==l):
        print(1)
        continue
    for i in range(1,N):
        if(r==l):
            k=i
            break
        r=r-A[i]
        l=l+A[i-1]
    print(k)
