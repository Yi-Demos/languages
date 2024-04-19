function designerPdfViewer(h, word) {
  let maxValue = 0;

  for (const char of word) {
    const index = char.charCodeAt(0) - 97; // convert letter to number a = 0 ...

    if (h[index] > maxValue) maxValue = h[index];
  }

  return maxValue * word.length;
}

console.log(
  designerPdfViewer(
    [
      1, 3, 1, 3, 1, 4, 1, 3, 2, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
      5,
    ],
    "abc"
  )
); // 9

console.log(
  designerPdfViewer(
    [
      1, 3, 1, 3, 1, 4, 1, 3, 2, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
      7,
    ],
    "zaba"
  )
);
