function beggars(values, n) {
  if (!n) return [];
  const gadoylar = new Array(n).fill(0);
  const chaqa = values.length;
  let gadoyIndex = 0;
  let chaqaIndex = 0;

  while (chaqaIndex <= chaqa) {
    gadoylar[gadoyIndex] += values[chaqaIndex] ? values[chaqaIndex] : 0;
    chaqaIndex++;
    gadoyIndex++;
    if (gadoyIndex == n) gadoyIndex = 0;
  }
  return gadoylar;
}

console.log(beggars([1, 2, 3, 4, 5], 3));
