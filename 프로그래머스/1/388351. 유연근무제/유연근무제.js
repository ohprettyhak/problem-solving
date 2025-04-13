function addMinutes(time, minutesToAdd) {
    const hour = Math.floor(time / 100);
    const minute = time % 100;

    let totalMinutes = hour * 60 + minute + minutesToAdd;

    const newHour = Math.floor(totalMinutes / 60);
    const newMinute = totalMinutes % 60;

    return newHour * 100 + newMinute;
}

function isAfter(a, b) {
    return a < b;
}

function solution(schedules, timelogs, startday) {
    const answers = Array.from({ length: schedules.length }, () => 1);
    let day = startday;

    for (let log = 0; log < 7; log++) {
        if (day === 6 || day === 7) {
            day = day === 6 ? 7 : 1;
            continue;
        }

        for (let member = 0; member < answers.length; member++) {
            const schedule = addMinutes(schedules[member], 10);
            if (isAfter(schedule, timelogs[member][log])) {
                answers[member] = 0;
            }
        }
        day++;
    }

    return answers.filter(a => a === 1).length;
}
