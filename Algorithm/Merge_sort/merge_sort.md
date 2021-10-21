#Merge_sort
https://youtu.be/lRDQRsFjqLk

```python
def merge(U,V):
    S=[]
    i = j = 0
    while(i < len(U) and j < len(V)):
        if U[i] < V[j]:
            S.append(U[i])
            i += 1
        else:
            S.append(V[j])
            j += 1
    if i < len(U):
        S = S + U[i : len(U)]
    else:
        S = S + V[j : len(V)]
    return S

def mergesort (S):
    n = len(S)
    if n <= 1:
        return S
    else:
        mid = n//2
        U = mergesort(S[0:mid])
        V = mergesort(S[mid:n])
        print("U =", U, end=" ")
        print("V =", V)
        return merge(U,V)
```

이 코드의 문제점?  
리스트 S외에 U, V를 추가적으로 사용함으로 메모리 비효율성 초래(대략 2n개)

```python
def merge02 (S, low, mid, high):
    U = []
    i = low
    j = mid + 1
    while i <= mid and j <= high:
        if S[i] < S[j]:
            U.append(S[i])
            i += 1
        else:
            U.append(S[j])
            j += 1
    if i <= mid:
        U += S[i : mid +1]
    else:
        U += S[j : high +1]
    for k in range(low, high + 1):
        S[k] = U[k - low]

def mergesort2 (S, low, high):
    if low < high:
        mid = (low + high) // 2
        mergesort2(S, low, mid)
        mergesort2(S, mid + 1, high)
        print(S[low : high + 1])
        merge02(S, low, mid, high)
```

> low, mid, high 포인터를 이용해서 해결해줄 수 있다.  
> 그래도 추가 메모리 필요(대략 n개)
