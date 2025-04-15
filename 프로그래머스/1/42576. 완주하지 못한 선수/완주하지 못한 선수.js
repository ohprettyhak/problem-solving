function solution(participant, completion) {
    var answer = '';
    
    const player = new Map();
    for (p of participant) {
        player.set(p, (player.get(p) || 0) + 1);
    }
    
    for (c of completion) {
        player.set(c, player.get(c) - 1);
    }
    
    for (const [name, count] of player) {
        if (count > 0) return name;
    }
    
    return answer;
}