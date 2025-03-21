const solution = (N, L, R, grid) => {
  const dx = [0, 0, 1, -1];
  const dy = [1, -1, 0, 0];

  const isRange = (x, y) => x >= 0 && x < N && y >= 0 && y < N;

  let count = 0;

  while (true) {
    let moved = false;
    const visited = Array.from(Array(N), () => Array(N).fill(false));

    for (let i = 0; i < N; i++) {
      for (let j = 0; j < N; j++) {
        if (visited[i][j]) continue;

        const queue = [[i, j]];
        const group = [[i, j]];
        let sum = grid[i][j];

        visited[i][j] = true;

        while (queue.length > 0) {
          const [x, y] = queue.shift();

          for (let d = 0; d < 4; d++) {
            const nx = x + dx[d];
            const ny = y + dy[d];

            if (!isRange(nx, ny) || visited[nx][ny]) continue;

            const diff = Math.abs(grid[x][y] - grid[nx][ny]);

            if (diff >= L && diff <= R) {
              visited[nx][ny] = true;
              queue.push([nx, ny]);
              group.push([nx, ny]);
              sum += grid[nx][ny];
            }
          }
        }

        if (group.length > 1) {
          const avg = Math.floor(sum / group.length);

          for (let [x, y] of group) {
            grid[x][y] = avg;
          }

          moved = true;
        }
      }
    }

    if (!moved) break;
    count++;
  }

  return count;
}

const input = require("fs")
  .readFileSync(process.platform === "linux" ? "/dev/stdin" : "./input.txt")
  .toString()
  .trim()
  .split("\n")
  .map((el) => el.split(" ").map(Number));

const [metadata, ...grid] = input;
const [N, L, R] = metadata;

console.log(solution(N, L, R, grid));
