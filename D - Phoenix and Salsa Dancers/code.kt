private fun readLn() = readLine()!!
private fun readStrings() = readLn().split(" ")
private fun readInt() = readLn().toInt()
private fun readInts() = readStrings().map { it.toInt() }
private fun readLong() = readLn().toLong()
private fun readLongs() = readStrings().map { it.toLong() }
private fun readDouble() = readLn().toDouble()
private fun readDoubles() = readStrings().map { it.toDouble() }

fun main(args: Array<String>) {
   val teams = readInt()
    var maxPot:Long=0
    repeat(teams) {
        val n = readInt()
        val ids = readInts().toIntArray()
        ids.sortDescending()
        var ans=ids[0].toLong()
        for(i in 0 until n-2){
            ans+=ids[1+i/2]
        }
        if(ans>maxPot)
            maxPot=ans
    }
    println(maxPot)
}