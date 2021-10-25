import heapq

def heapsort_ascending(iterable):
    heap_list = []
    result = []
    # 모든 원소를 차례대로 힙에 삽입
    for value in iterable:
        heapq.heappush(heap_list, value)
    #힙에 삽입된 모든 원소를 차례대로 꺼내어 담기
    for i in range(len(heap_list)):
        result.append(heapq.heappop(heap_list))
        #append는 O(1)의 시간 복잡도
    return result

def heapsort_descending(iterable):
    heap_list = []
    result = []
    # 모든 원소를 차례대로 힙에 삽입
    for value in iterable:
        heapq.heappush(heap_list, -value)#-value를 통해서 절대값은 크고 실제로는 작은 값들어가게 해주기
    #힙에 삽입된 모든 원소를 차례대로 꺼내어 담기
    for i in range(len(heap_list)):
        result.append(-heapq.heappop(heap_list))
        #append는 O(1)의 시간 복잡도
    return result


list_for_sort=[1,3,5,7,2,4,9,6,8,0]
print(heapsort_ascending(list_for_sort))
print(heapsort_descending(list_for_sort))
# [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
# [9, 8, 7, 6, 5, 4, 3, 2, 1, 0]