private fun readLn() = readLine()!!
private fun readStrings() = readLn().split(" ")
private fun readInt() = readLn().toInt()
private fun readInts() = readStrings().map { it.toInt() }
private fun readLong() = readLn().toLong()
private fun readLongs() = readStrings().map { it.toLong() }
private fun readDouble() = readLn().toDouble()
private fun readDoubles() = readStrings().map { it.toDouble() }

fun main(args: Array<String>) {
   val testCases= readInt()
    repeat(testCases){
        val n=readInt()
        val nums=readInts()
        var gloMax:Long=Long.MIN_VALUE
        var start=0;var end=0
        var curStart=0
        var curSum:Long=0
        for(i in 0 until n){
            curSum+=nums[i]
            if(gloMax<curSum){
                gloMax=curSum
                start=curStart
                end=i
            }
            if(curSum<0){
                curSum=0
                curStart=i+1
            }
        }
        println("${end -start+1}")
    }
}