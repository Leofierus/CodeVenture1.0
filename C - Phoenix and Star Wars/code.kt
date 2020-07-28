private fun readLn() = readLine()!!
private fun readStrings() = readLn().split(" ")
private fun readInt() = readLn().toInt()
private fun readInts() = readStrings().map { it.toInt() }
private fun readLong() = readLn().toLong()
private fun readLongs() = readStrings().map { it.toLong() }
private fun readDouble() = readLn().toDouble()
private fun readDoubles() = readStrings().map { it.toDouble() }

fun getGCD(a: Int, b: Int): Int {
    if (b == 0)
        return a
    return getGCD(b, a % b)
}

fun getSlope(x: Int, y: Int): Pair<Int, Int> {
    val gcd = getGCD(x - 1, y - 1)
    return Pair((x - 1) / gcd, (y - 1) / gcd)
}

fun main(args: Array<String>) {
    val (n, m) = readInts()
    var count = 0
    val slopes: MutableSet<Pair<Int, Int>> = mutableSetOf()
    repeat(m) {
        val (x, y) = readInts()
        val slope = getSlope(x, y)
        if (!slopes.contains(slope)) {
            slopes.add(slope)
            count++
        }
    }
    println(count)
}