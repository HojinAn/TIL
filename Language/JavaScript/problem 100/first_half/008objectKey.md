```jsx
var d = {
    'height':180,
    'weight':78,
    'weight':84,
    'temperature':36,
    'eyesight':1
};

console.log(d['weight']);
```
출력값은?  

### solution
weight key가 2개다. 같은 key가 2번 이상 짝지어지는 경우 더 하단에 있는 값이 key의 value가 된다.  
따라서 답은 '84'