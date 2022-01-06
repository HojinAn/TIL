Naive한 코드를 Refactor하기

```javascript
function charCount(str) {
  var obj = {};
  for (var i = 0; i < str.length; i++) {
    var char = str[i].toLowerCase();
    if (/[a-z0-9]/.test(char)) {
      if (obj[char] > 0) {
        obj[char]++;
      } else {
        obj[char] = 1;
      }
    }
  }
  return obj;
}
```

다음과 같은 charCount() function을

```javascript
function charCount(str) {
  var obj = {};
  for (var char of str) {
    char = char.toLowerCase();
    if (/[a-z0-9]/.test(char)) {
      obj[char] = ++obj[char] || 1;
    }
  }
  return obj;
}
```
이렇게 더 보기 좋게 작성해 줄 수 있다.
정규 표현식 대신
```javascript
function isAlphaNumeric(char) {
  var code = char.charCodeAt(0);
  if (!(code > 47 && code < 58) && // numeric (0~9)
      !(code > 64 && code < 91) && // upper alpha (A~Z)
      !(code > 96 && code < 123)) { // lower alpha (a-z)
    return false;
  }
  return true;
}
```
isAlphaNumeric() function을 이용해 
```javascript
function charCount(str) {
  var obj = {};
  for (var char of str) {
    if (isAlphaNumeric(char)) {
      char = char.toLowerCase();
      obj[char] = ++obj[char] || 1;
    }
  }
  return obj;
}
```
이렇게 작성할 수도 있다. 깔끔하고 읽기 좋고 문자 코드를 사용하는 것이 정규표현법보다 더 효율적이라고 한다. 좋은 Refactor 과정을 본 것 같다.