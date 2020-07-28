private fun readLn() = readLine()!!
private fun readStrings() = readLn().split(" ")
private fun readInt() = readLn().toInt()
private fun readInts() = readStrings().map { it.toInt() }
private fun readLong() = readLn().toLong()
private fun readLongs() = readStrings().map { it.toLong() }
private fun readDouble() = readLn().toDouble()
private fun readDoubles() = readStrings().map { it.toDouble() }

var N:Int=0

fun getCofactor(A: Array<IntArray>, temp: Array<IntArray>, p: Int, q: Int, n: Int) {
    var i = 0
    var j = 0
    for (row in 0 until n) {
        for (col in 0 until n) {
            if (row != p && col != q) {
                temp[i][j++] = A[row][col]
                if (j == n - 1) {
                    j = 0
                    i++
                }
            }
        }
    }
}

fun determinant(A: Array<IntArray>, n: Int): Int {
    var d = 0 
    if (n == 1) return A[0][0]
    val temp = Array(N) { IntArray(N) }
    var sign = 1
    for (f in 0 until n) {
        getCofactor(A, temp, 0, f, n)
        d += sign * A[0][f] * determinant(temp, n - 1)
        sign = -sign
    }
    return d
}

fun adjoint(A: Array<IntArray>, adj: Array<IntArray>) {
    if (N == 1) {
        adj[0][0] = 1
        return
    }
    var sign = 1
    val temp = Array(N) { IntArray(N) }
    for (i in 0 until N) {
        for (j in 0 until N) {
            getCofactor(A, temp, i, j, N)
            sign = if ((i + j) % 2 == 0) 1 else -1
            adj[j][i] = sign * determinant(temp, N - 1)
        }
    }
}

fun inverse(A:Array<IntArray>,inv:Array<FloatArray>){
    val det = determinant(A, N)
    if (det == 0) {
        print("Singular matrix, can't find its inverse")
    }
    val adj = Array(N) { IntArray(N) }
    adjoint(A, adj)
    for (i in 0 until N)
        for (j in 0 until N)
            inv[i][j] = adj[i][j] / det.toFloat()
}

fun display(A: Array<IntArray>) {
    for (i in 0 until N) {
        for (j in 0 until N) print("${A[i][j]} ")
        println()
    }
}

fun display(A: Array<FloatArray>) {
    for (i in 0 until N) {
        for (j in 0 until N) print("${A[i][j]} ")
        println()
    }
}

fun main(args: Array<String>) {
    val testCases= readInt()
    repeat(testCases){
        N= readInt()
        val A=Array(N){IntArray(N+1)}
        val inv=Array(N){FloatArray(N)}
        for (i in 0 until N){
            A[i]= readInts().toIntArray()
        }
        inverse(A,inv)
        var totalSum:Long=0L
        for(i in 0 until N){
            var currSum:Float=0.0f
            for (j in 0 until N){
                currSum+=inv[i][j]*A[j][N]
            }
            totalSum+=Math.round(currSum)
        }
        totalSum=Math.abs(totalSum)
        var factSum:Long=0L
        for(i in 1..totalSum){
            if(totalSum%i==0L)
                factSum+=i
        }
        println(factSum)
    }
}