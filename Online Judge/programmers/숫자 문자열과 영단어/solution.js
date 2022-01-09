const nums = [
  "zero",
  "one",
  "two",
  "three",
  "four",
  "five",
  "six",
  "seven",
  "eight",
  "nine",
];
const numMap = new Map([
  ["zero", 0],
  ["one", 1],
  ["two", 2],
  ["three", 3],
  ["four", 4],
  ["five", 5],
  ["six", 6],
  ["seven", 7],
  ["eight", 8],
  ["nine", 9],
]);

const solution = (s) => {
  let result = "";
  let temp = "";
  for (let char of s) {
    if (!isNaN(+char)) {
      result += char;
      continue;
    }

    temp += char;
    if (numMap.get(temp)) {
      result += numMap.get(temp);
      temp = "";
    }
  }

  return +result;
};
