package com.example.mgproject

//클래스가 상속 가능하게 하려면 open class
open class English(open val lang : String = "English") {
    init {
        println("<<< This is English >>>")
    }

    //메서드가 오버라이딩 가능하게 하려고 해도 open fun
    open fun singASong(){
        println("lalala")
    }
}


class Korean : English() {
    init {
        println("<<< This is Korean >>>")
    }

    override val lang = "Korean"

    override fun singASong() {
        super.singASong()
        println("language = ${super.lang}")
        println("라라라")
        println("language = ${this.lang}")
    }
}


fun main() {
    val singer = Korean()
    singer.singASong()
}
