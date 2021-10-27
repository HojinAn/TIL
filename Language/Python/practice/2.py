import collections


def solution(participant, completion):
    print(collections.Counter(participant))
    print(collections.Counter(completion))
    answer = collections.Counter(participant) - collections.Counter(completion)
    print(answer)
    return list(answer)

print(solution(["mislav", "stanko", "mislav", "ana"],["stanko", "ana", "mislav"]))