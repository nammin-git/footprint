package com.mgprogect.twice

import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import com.mgprogect.twice.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {
    val binding by lazy { ActivityMainBinding.inflate(layoutInflater)}
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(binding.root)

        val btn1 = binding.member1
        val btn2 = binding.member2
        val btn3 = binding.member3
        val btn4 = binding.member4
        val btn5 = binding.member5
        val btn6 = binding.member6
        val btn7 = binding.member7
        val btn8 = binding.member8
        val btn9 = binding.member9

        btn1.setOnClickListener {
            //페이지 이동 시에는 Intent
            val intent = Intent(this, ImageInsideActivity::class.java)
            //페이지 이동 시에 데이터를 같이 넘겨주려면 putExtra 사용
            intent.putExtra("data", "1")
            startActivity(intent)
        }

        btn2.setOnClickListener {
            val intent = Intent(this, ImageInsideActivity::class.java)
            intent.putExtra("data", "2")
            startActivity(intent)
        }

        btn3.setOnClickListener {
            val intent = Intent(this, ImageInsideActivity::class.java)
            intent.putExtra("data", "3")
            startActivity(intent)
        }

        btn4.setOnClickListener {
            val intent = Intent(this, ImageInsideActivity::class.java)
            intent.putExtra("data", "4")
            startActivity(intent)
        }

        btn5.setOnClickListener {
            val intent = Intent(this, ImageInsideActivity::class.java)
            intent.putExtra("data", "5")
            startActivity(intent)
        }

        btn6.setOnClickListener {
            val intent = Intent(this, ImageInsideActivity::class.java)
            intent.putExtra("data", "6")
            startActivity(intent)
        }

        btn7.setOnClickListener {
            val intent = Intent(this, ImageInsideActivity::class.java)
            intent.putExtra("data", "7")
            startActivity(intent)
        }

        btn8.setOnClickListener {
            val intent = Intent(this, ImageInsideActivity::class.java)
            intent.putExtra("data", "8")
            startActivity(intent)
        }

        btn9.setOnClickListener {
            val intent = Intent(this, ImageInsideActivity::class.java)
            intent.putExtra("data", "9")
            startActivity(intent)
        }

    }
}