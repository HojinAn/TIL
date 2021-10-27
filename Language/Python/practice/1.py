def solution(participant, completion):
    participant.sort()
    completion.sort()
    completion.append('1')
    answer=''
    for i in range(len(participant)):
        if participant[i]!=completion[i]:
            answer=participant[i]
            break
        else:
            continue
    return answer

print(solution(["leo", "kiki", "eden"],["eden", "kiki"]))