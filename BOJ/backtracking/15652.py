#15652 29200kb 84ms
n, m = map(int, input().split())
visited=[False]*n
out=[]
def bt(n, m, depth, start):
    if len(out) == m:
        print(' '.join(map(str, out)))
        return
    for i in range(start, n):
        out.append(i+1)
        bt(n,m,depth+1,i)
        out.pop()
bt(n,m,0,0)