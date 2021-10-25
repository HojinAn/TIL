from collections import deque

data = deque([2, 3, 4])
data.appendleft(1)
data.append(5)

print(data) #deque([1,2,3,4,5]) 출력
print(list(data)) # 리스트 자료형으로 변환 -> [1,2,3,4,5] 출력

print(data.popleft()) # 1 출력
print(data.pop()) # 5 출력
print(list(data)) #[2,3,4] 출력
