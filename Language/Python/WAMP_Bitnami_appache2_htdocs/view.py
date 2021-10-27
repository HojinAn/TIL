import os, html_sanitizer
def getlist():#글 목록을 표현한다는 뜻에서
    sanitizer = html_sanitizer.Sanitizer()
    files = os.listdir('data')#어케 구현 몰라, 하지만 입력값으로 'data'를 주 'data' directory에 있는 파일 목록을 list에 담에서 반환해주는 함수
    #print(files)
    listStr = ''
    for item in files:
        item = sanitizer.sanitize(item)
        listStr = listStr + '<li><a href="index.py?id={name}">{name}</a></li>'.format(name=item)
        #<li>는 목록의 항목을 나타낸
    #print(listStr)
    return listStr#이 함수가 호출 됐을 때 목록에 해당되는 값이 보여지게 된다
