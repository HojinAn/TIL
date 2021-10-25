from collections import Counter

counter = Counter(['red', 'blue', 'red', 'green', 'blue', 'red', 'blue'])

print(counter)#Counter 객체이기 때문에 자료형 선언을 해줘야 한다.
print(dict(counter)) # {'red': 3, 'blue': 3, 'green': 1} 출력