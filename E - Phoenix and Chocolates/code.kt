private fun readLn() = readLine()!!
private fun readStrings() = readLn().split(" ")
private fun readInt() = readLn().toInt()
private fun readInts() = readStrings().map { it.toInt() }
private fun readLong() = readLn().toLong()
private fun readLongs() = readStrings().map { it.toLong() }
private fun readDouble() = readLn().toDouble()
private fun readDoubles() = readStrings().map { it.toDouble() }

fun main(args: Array<String>) {
   val testCases = readInt()
    repeat(testCases) {
        val n = readInt()
        val nums = readInts()
        val total = 1 shl n
        var totalSum:Long=0
        for (i in 0 until total) {
            var currSum:Long = 0
            for (j in 0 until n)
                if ((i and (1 shl j)) != 0)
                    currSum += nums[j]

            if(currSum and 1 ==1L){
                totalSum+=currSum
            }
        }
        println(totalSum)
    }
}