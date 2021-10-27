#!C:\Users\AHJ\AppData\Local\Programs\Python\Python38-32/python.exe
print("Content-Type: text/html")    # HTML is following // this is header
print()                             # blank line, end of headers
import cgi, os, view, html_sanitizer
sanitizer = html_sanitizer.Sanitizer()

form = cgi.FieldStorage()
if 'id' in form:
    title = pageId = form["id"].value#pageId는 고유한게 좋으니깐 title를 따로 만들었다?
    description = open('data/'+pageId, 'r').read()
    #description = description.replace('<', '&lt;')
    #description = description.replace('>', '&gt;')
    title = sanitizer.sanitize(title)
    description = sanitizer.sanitize(description)
    update_link = '<a href="update.py?id={}">update</a>'.format(pageId)
    delete_action='''
        <form action="process_delete.py" method="post">
            <input type="hidden" name="pageId" value="{}">
            <input type="submit" value="delete">
        </form>
    '''.format(pageId)
else:#WEB 클릭 했을 떄(가장 큰 범주)
    title = pageId = 'Welcome'
    description = 'Hello, web'
    update_link = ''
    delete_action = ''

print('''<!doctype html>
<html>
<head>
  <title>WEB1 - Welcome</title>
  <meta charset="utf-8">
</head>
<body>
<h1><a href="index.py">WEB</a></h1>
  <ol>
    {listStr}
  </ol>
  <a href="create.py">create</a>
  {update_link}
  {delete_action}
  <h2>{title}</h2>
  <p>{desc}</p>
</body>
</html>
'''.format(
title=title,
desc=description,
listStr=view.getlist(),
update_link=update_link,
delete_action=delete_action))
