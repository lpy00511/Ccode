const length = Number("30")
const lines = "197 75 517 39724 7906061 1153471 3 15166 168284 3019844 272293 316 16 24548 42 118 5792 5 9373 1866366 4886214 24 2206 712886 104005 1363 836 64273 440585 3576".split(' ').map(a => Number(a)).sort((a, b) => (a - b) * -1)

var result = 'NO'
for (var i = 0; i <= length - 3; i++) {
  if (lines[i] < lines[i + 1] + lines[i + 2]) {
    result = 'YES'
    break
  }
}

console.log(result)