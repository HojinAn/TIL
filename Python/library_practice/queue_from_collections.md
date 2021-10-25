# Queue

파이썬에서는 collections.deque를 사용해 queue를 구현한다. 별도 Queue 라이브러리는 일잔적인 queue 자료구조 구현이 아니다. 따라서 deque를 이용해 queue를 구현해야한다.

> ## list vs. deque

|                | list | deque |
| :------------- | :--- | :---- |
| 가장 앞에 추가 | O(N) | O(1)  |
| 가장 뒤에 추가 | O(1) | O(1)  |
| 가장 앞에 제거 | O(N) | O(1)  |
| 가장 뒤에 제거 | O(1) | O(1)  |

deque에서는 list 자료형과 다르게 인덱싱, 슬라이싱 등의 기능은 사용할 수 없다. deque는 stack이나 queue의 기능을 모두 포함한다고도 볼 수 있기 때문에 stack 혹은 queue 자료구조의 대용으로 사용될 수 있다.

queue로 이용시 -> popleft(), append(x) 사용
stack으로 이용시 -> pop(), append(x)
