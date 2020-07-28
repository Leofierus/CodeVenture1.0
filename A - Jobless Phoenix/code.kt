private fun readLn() = readLine()!!
private fun readStrings() = readLn().split(" ")
private fun readInt() = readLn().toInt()
private fun readInts() = readStrings().map { it.toInt() }
private fun readLong() = readLn().toLong()
private fun readLongs() = readStrings().map { it.toLong() }
private fun readDouble() = readLn().toDouble()
private fun readDoubles() = readStrings().map { it.toDouble() }

fun getJobs(number:Long):Long{
    var sum:Long=0
    var num=number
    while(num>0){
        sum+=num%2
        num/=2
    }
    return sum
}
fun main(args: Array<String>) {
    val testCases=readInt()
    repeat(testCases){
        val num=readLong()
        println(getJobs(num))
    }
}