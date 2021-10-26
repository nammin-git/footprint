package com.example.mgproject


//1. 함수
fun helloWorld(){
    println("Hello World!")
}
//
//fun add(a : Int, b : Int) : Int {
//    return a+b
//}
//
//
////2. val vs var
//
//fun hi(){
//    val a : Int = 10    //value
//    var b : Int = 9     //variation
//
//    //a = 100
//    b = 100
//
//    var name1 : String = "Meggy"
//    var name2 = "Joyce"
//    var name3 : String
//    name3 = "Hesse"
//}
//
//
////3. String Template
//
//fun nameAge(){
//
//    val name = "Meggy"
//    val lastName = "Hong"
//    println("My name is ${name + lastName} I'm 23")
//    println("this is 2\$")
//
//}
//
//
////4. 조건식
//
//fun maxBy(a : Int, b : Int) : Int{
//    if(a>b){
//        return a
//    }else{
//        return b
//    }
//}
//
//fun maxBy2(a : Int, b : Int) : Int = if(a>b) a else b
//
//fun checkNum(score : Int) {
//    when(score) {
//        0 -> println("this is 0")
//        1 -> println("this is 1")
//        2,3 -> println("this is 2 or 3")
//        else -> println("this is 0")
//    }
//
//    var b : Int = when(score){
//        1-> 1
//        2-> 2
//        else -> 3
//    }
//
//    println("b : ${b}")
//
//    when(score){
//        in 90..100 -> println("You are genius")
//        in 10..80 -> println("Not bad")
//        else -> println("Okay")
//    }
//}
//
//
////5. Array and List
//
////Array
////List 1. List 2.MutableList
//
//fun array() {
//    val array = arrayOf(1, 2, 3)
//    val list = listOf(1, 2, 3)
//
//    val array2 = arrayOf(1, "d", 3.4f)
//    val list2 = listOf(1, "d", 3.4f)
//
//    //MutableList 값 변경 가능
//    //Array 는 MutableList 의 대표
//    array[0] = 3
//
//    var arrayList = arrayListOf<Int>()
//    arrayList.add(10)
//    arrayList.add(20)
//
//}
//
//
////6. For and While
//
//fun for1(){
//    val students = arrayListOf("Joyce", "James", "Matthew", "Lucy")
//
//    for( name : String in students){
//        println("${name}")
//    }
//
//    //인덱스와 이름을 함께 쓰고 싶다면?
//    for((index, name) in students.withIndex()){
//        println("${index+1}번째 학생 : ${name}")
//    }
//}
//
//fun for2(){
//    var sum : Int = 0
//    for( i : Int in 1..10){
//        sum += i
//    }
//
//    println(sum)
//
//    var result : Int = 0
//    for (j : Int in 1 until 100){
//        result = j
//    }
//
//    println(result)
//}
//
//fun sampleWhile() {
//    var index = 0
//    while(index<10){
//        println("current index = ${index}")
//        index++
//    }
//}
//
//
////7. Nullable / NonNull
//
//fun nullcheck(){
//    //NPE : NULL pointer Exception
//
//    var name : String = "Joyce"     //nonNull type
//
//    var nullName: String? = null    // ? 붙이면 null type
//
//    var nameInUpperCase : String = name.uppercase()
//
//    var nullNameInUpperCase = nullName?.uppercase()     //null 아니면 대문자, null 이면 null 반환
//
//
//    // ?: 엘비스 프레슬리 연산자
//    // default 값을 주고 싶을 때
//
//    val lastName : String? = null
//
//    val fullName = name + " " + (lastName?: "NO lastName")
//
//    println(fullName)
//
//
//}
//
//// !!
////null이 아님을 표시
//
//fun ignoreNulls(str : String?){
//    val mNotNull : String = str!!    //절대로 null 일리 없으니 null이 아니라고 생각해라 컴파일러야
//    val upper : String = mNotNull.uppercase()
//
//    println("$upper")
//}
//
//
//fun printEmail(){
//    val email : String? ="joycehongXXXX@nana.vom"
//    email?.let{
//        //let의 리시버(지금은 email) not null 이라면 let 함수 안으로 옮겨줌
//        //만약 리시버가 null 이라면 실행 X
//        println("my email is $email")
//    }
//}
//
//
//class
//상속 / 정의 / construction 정의
//
//class Human constructor(val name : String = "Anonymous") {
//    //생성자
//
//    //init      //처음 실행할 때 하는 동작을 지정
//    //주 생성자
//    init {
//        println("New human has been born!!")
//    }
//
//
//    //부 생성자
//    //constructor
//
//    constructor(name: String, age : Int) : this(name){
//        //부 생성자는 주 생성자의 위임을 받아야함
//        //지금은 this 라는 예약어로 위임을 받음
//        println("My name is ${name}, ${age} years old")
//    }
//
//
//    //val name : String = "joyce"
//
//    fun eatingCake(){
//        println("This is so YUMMMYYY~~~")
//    }
//}


fun main(){
//    val human = Human("Minsu")
//
//    val stranger = Human()
//    human.eatingCake()
//
//    val mom = Human("Guri", 52)
//
//    println("this is human's name is ${stranger.name}")


    helloWorld()

//    println(add(a= 4, b= 5))
//
//    nameAge()
//
//    maxBy(8, 9)
//    maxBy2(7,5)
//    checkNum(score = 1)
//
//    for1()
//    for2()
//    sampleWhile()
//
//    nullcheck()
//    ignoreNulls("kong")
//
//    printEmail()
}



