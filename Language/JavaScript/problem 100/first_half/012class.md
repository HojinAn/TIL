```jsx
// 데이터
// <여기에 class를 작성하세요.>

const x = new Wizard(545, 210, 10);
console.log(x.health, x.mana, x.armor);
x.attack();

// 출력
// 545 210 10
// 파이어볼
```

### solution  

```jsx
// 데이터
class Wizard{
    constructor(health, mana, armor) {
        this.health = health;
        this.mana = mana;
        this.armor = armor;
    }
    // method
    attack() {
        console.log("파이어볼");
    }
}

const x = new Wizard(545, 210, 10);
console.log(x.health, x.mana, x.armor);
x.attack();

// 출력
// 545 210 10
// 파이어볼
```
`constructor`는 객체에서 인스턴스가 생성이 될 때 객체를 초기화 시켜주는 역할을 한다.
health, mana, armor 등은 Wizard class를 통해서 만들어진 instance의 health다.