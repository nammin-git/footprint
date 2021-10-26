package com.example.mgproject

// 1. Lamda
// value 처럼 다룰 수 있는 익명함수
// 1) 메소드의 파라미터로 넘겨줄 수 있다 fun maxBy(fun ~)
// 2) return 값으로 사용할 수 있다 return fun ~

// 람다의 기본 정의
// val lamdaName : Type = {argumentList -> codeBody}

val square : (Int) -> (Int) = {number -> number*number}

val nameAge = {name : String, age : Int ->
    "My name is ${name} I'm ${age}"
}


// 확장함수
// 있는 클래스를 확장하고 싶을 때

val pizzaIsGreat : String.() -> String = {
    this + "\"Pizza is the best!\""
}

fun extendString(name : String, age : Int) : String {

    val introduceMyself : String.(Int) -> String = {"I am this ${this} and ${it} years old"}
    return name.introduceMyself(age)
}


// 람다의 Return
// 마지막 한 줄이 return을 의미한다

val calculateGrade : (Int) -> String = {
    when(it){
        in 0..40 -> "fail"
        in 41..70 -> "pass"
        in 71..100 -> "perfect"
    }
}




fun main() {
    println(square(12))
    println(nameAge("Joyce", 99))

    val a = "joyce said"
    val b = "meggy said"
    println(a.pizzaIsGreat())
    println(b.pizzaIsGreat())

    println(extendString("Ariana", 28))
}




