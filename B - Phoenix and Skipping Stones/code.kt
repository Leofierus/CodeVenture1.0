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
        val len=readInt()
        val stones= readLn()
        val occArray=IntArray(26)
        var max=0
        for(char in stones){
            val i=char.toInt()-97
            occArray[i]++
            if(occArray[i]>max)
                max=occArray[i]
        }
        var min=len
        var ans:Char='a'
        var i=0
        while(i<26){
            if(occArray[i]==max){
                val char=(97+i).toChar()
                val diff=stones.lastIndexOf(char)-stones.indexOf(char)
                if(diff<min){
                    min=diff
                    ans=char
                }
            }
            i++
        }
        println("$ans ${min+1}")
    }
}