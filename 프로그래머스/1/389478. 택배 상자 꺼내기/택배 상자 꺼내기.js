function solution(n, w, num) {
    const arr = Array.from({ length: w }, () => []);
    
    let line = -1;
    for (let i = 0; i < n; i++) {
        if (Math.floor(i / w) % 2 === 0) {
            arr[i % w].push(i + 1);    
            if (i + 1 === num) line = i % w;
        } else {
            arr[(w - 1) - (i % w)].push(i + 1);
            if (i + 1 === num) line = (w - 1) - (i % w);
        }
    }

    console.log(arr, line);
    
    let answer = 0;
    for (let i = arr[line].length - 1; i >= 0; i--) {
        answer++;
        if (arr[line][i] === num) break;
    }
    
    return answer;
}