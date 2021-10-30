function minCostClimbingStairs(arr) {
  let case1 = 0;
  let case2 = 0;
  let current;
  let result;
  for (let i = arr.length - 1; i >= 0; --i) {
    current = arr[i] + Math.min(case1, case2);
    case2 = case1;
    case1 = current;
  }
  result = Math.min(case1, case2);
  return result;
}

const arr1 = [1, 2, 3, 4, 5, 6, 7, 8];
const arr2 = [1, 100, 1, 1, 1, 100, 1, 100, 1];
console.log(minCostClimbingStairs(arr1));
console.log(minCostClimbingStairs(arr2));
