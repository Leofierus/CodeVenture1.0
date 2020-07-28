private fun readLn() = readLine()!!
private fun readStrings() = readLn().split(" ")
private fun readInt() = readLn().toInt()
private fun readInts() = readStrings().map { it.toInt() }
private fun readLong() = readLn().toLong()
private fun readLongs() = readStrings().map { it.toLong() }
private fun readDouble() = readLn().toDouble()
private fun readDoubles() = readStrings().map { it.toDouble() }

fun main(args: Array<String>) {
    val testCases=readInt()
    repeat(testCases){
        var n= readInt()
        var count:Long=0
        if(n and 1==0){
            count+=2
            while(n and 1==0){
                n/=2
            }
        }
        for(i in 3..Math.sqrt(n.toDouble()).toInt() step 2){
            if(n%i==0){
                count+=i
                while (n%i==0){
                    n/=i
                }
            }
        }
        if(n>2){
            count+=n
        }
        println(count)
    }
}