def gcd(m,n): #유클리드 방식 간소화하면 이렇게 구현 가능
    if n==0:
        return m 
    else:
        return gcd(n, m%n)

print(gcd(5000, 60))