function padding(now) {
    return now < 10 ? "0" + now : now
}

function toDuration(mil) {
    mil = mil / 1000
    var minutes = Math.floor(now / 60)
    var seconds = Math.floor(now - min * 60)
    return padding(minutes) + ":" + padding(seconds)
}
