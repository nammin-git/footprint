/*
package com.example.mgproject

import kotlin.system.exitProcess
import com.example.mgproject.OrderSystem as OrderSystem1

//코틀린은 파일 이름과 클래스 이름이 달라도 됨
//여러 클래스를 한 파일에 넣어도 됨

class OrderSystem {
    init{
        println("Welcome to the ***Cafe Jungle***")
    }

    fun question1() {
        println("May I help you?")
        println("'Yes or No'")
    }

    fun question2(){
        println("What drink do you want?")
        println("You can get Coffee, Latte or Smoothie")
        println(">> If you don't want drink, type 'pass' <<")
    }

    fun question3(){
        println("What dessert do you want?")
        println("You can get Coffee, Latte or Smoothie")
        println(">> If you don't want drink, type 'pass' <<")
    }

}

class CheckAnswer1(answer1 : String) {

    var value : Unit = when(answer1){
        "Yes", "yes" -> break;
        "No", "no" -> {
            println("Okay")
            println("Have a good day")
            exitProcess(0)
        }
        else -> {
            println("Check your answer one more time")
            println("You can answer Yes or No")
            continue;
        }
    }
}

class CheckAnswer2(answer2 : String) : String() {
    var value : Unit = when(answer2) {
        "Coffee", "coffee" -> return "coffee"
        "Latte", "latte" -> return "latte"
        "Smoothie", "smoothie" -> return "smoothie"
    }

}


class Dessert(val name: String = "No Dessert") {

    init{
        println("You can choose one of these two")
        println("Cookie,    cake")
    }

    val CookieOrCake = readLine()

    fun question(){
        println("What kinds of ${CookieOrCake} do you want?")
        when(CookieOrCake){
            "Cookie", "cookie", "cookies", "Cookies" -> {
                println("There are Chocolate, Butter, Cinnamon")
            }
            "Cake", "cake" -> {
                println("There are Chocolate, Cheese")
            }
        }
    }

    val dessertType = readLine()

    constructor(name: String, kinds: String) : this(name){

    }

}

class Drink constructor(val name : String = "No Drink") {

    //처음 인스턴스를 생성할 때 하는 동작
    //주생성자의 일부
    init{
        println("You can choose one of these three")
        println("Coffee,    Latte,     Smoothie")
    }

    //부생성자
    //주생성자가 있다면 꼭 위임을 받아야 한다 -> this()
    constructor(name: String, kinds: String) : this(name){
    }

}


fun main(){

    val order = OrderSystem1()

    //Q1
    order.question1()

    //input
    var answer1 = readLine()

    val checkAnswer1 = answer1?.let { CheckAnswer1(it) }

    //Q2
    order.question2()

    //input
    var answer2 = readLine()

    val checkAnswer2 = answer2?.let{CheckAnswer2(it)}


    //Briefing


}







*/