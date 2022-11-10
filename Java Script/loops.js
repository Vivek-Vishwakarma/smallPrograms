const nums = [1, 2, 3, 4, 5];
const sum = nums.reduce((acc, curr, i, orgArray) => {
  return acc + curr;
});
console.log(sum);
