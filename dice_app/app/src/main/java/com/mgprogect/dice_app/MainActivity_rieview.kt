package com.mgprogect.dice_app

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import android.widget.Toast
import com.mgprogect.dice_app.databinding.ActivityMainBinding
import kotlin.random.Random

class MainActivity : AppCompatActivity() {
    val binding by lazy { ActivityMainBinding.inflate(layoutInflater) }
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(binding.root)

        val diceImage1 = binding.dice1
        val diceImage2 = binding.dice2

        binding.diceStartBtn.setOnClickListener {

            //클릭 되는지 토스트
            Toast.makeText(this, "주사위 GO !", Toast.LENGTH_SHORT).show()

            //랜덤한 숫자를 가질 변수 number
            val number1 = Random.nextInt(1, 7)
            val number2 = Random.nextInt(1, 7)

            //각 숫자마다 이미지 바꿔주기
            if(number1 == 1) {
                diceImage1.setImageResource(R.drawable.dice_1)
            } else if(number1 == 2) {
                diceImage1.setImageResource(R.drawable.dice_2)
            } else if(number1 == 3) {
                diceImage1.setImageResource(R.drawable.dice_3)
            } else if(number1 == 4) {
                diceImage1.setImageResource(R.drawable.dice_4)
            } else if(number1 == 5) {
                diceImage1.setImageResource(R.drawable.dice_5)
            } else {
            diceImage1.setImageResource(R.drawable.dice_6)
            }


            when(number2) {
                1 -> diceImage2.setImageResource(R.drawable.dice_1)
                2 -> diceImage2.setImageResource(R.drawable.dice_2)
                3 -> diceImage2.setImageResource(R.drawable.dice_3)
                4 -> diceImage2.setImageResource(R.drawable.dice_4)
                5 -> diceImage2.setImageResource(R.drawable.dice_5)
                6 -> diceImage2.setImageResource(R.drawable.dice_6)
            }

        }
    }
}