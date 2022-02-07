package com.mgprogect.bts_gallary

import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.Toast
import com.mgprogect.bts_gallary.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {
    lateinit var binding: ActivityMainBinding

    override fun onCreate(savedInstanceState: Bundle?) {
        binding = ActivityMainBinding.inflate(layoutInflater)
        super.onCreate(savedInstanceState)
        setContentView(binding.root)

        // 1. 프로그램이 화면이 클릭되었다는 것을 알아야함
        val image1 = binding.btsImage1
        image1.setOnClickListener {

            // Toast는 쪼매하게 나오는 창 ... 클릭이 되었는지 확인하는 용도로 사용
            Toast.makeText(this, "Click Picture 1", Toast.LENGTH_SHORT).show()

            // 2. 화면이 클릭되면, 다음 화면으로 넘어가서 사진을 크게 보여줌
            // Intent를 사용해서 화면을 전환
            val intent = Intent(this, Bts1Activity::class.java)
            startActivity(intent)

        }

        val image2 = binding.btsImage2
        image2.setOnClickListener {
            Toast.makeText(this, "Click Picture 2", Toast.LENGTH_SHORT).show()

            val intent = Intent(this, Bts2Activity::class.java)
            startActivity(intent)
        }

        val image3 = binding.btsImage3
        image3.setOnClickListener {
            Toast.makeText(this, "Click Picture 3", Toast.LENGTH_SHORT).show()

            val intent = Intent(this, Bts3Activity::class.java)
            startActivity(intent)
        }

        val image4 = binding.btsImage4
        image4.setOnClickListener {
            Toast.makeText(this,"Click Picture 4", Toast.LENGTH_SHORT).show()

            val intent = Intent(this, Bts4Activity::class.java)
            startActivity(intent)
        }

        val image5 = binding.btsImage5
        image5.setOnClickListener {
            Toast.makeText(this,"Click Picture 5", Toast.LENGTH_SHORT).show()

            val intent = Intent(this, Bts5Activity::class.java)
            startActivity(intent)
        }

        val image6 = binding.btsImage6
        image6.setOnClickListener {
            Toast.makeText(this, "Click Picture 6", Toast.LENGTH_SHORT).show()

            val intent = Intent(this, Bts6Activity::class.java)
            startActivity(intent)
        }

        val image7 = binding.btsImage7
        image7.setOnClickListener {
            Toast.makeText(this, "Click Picture 7", Toast.LENGTH_SHORT).show()

            val intent = Intent(this, Bts7Activity::class.java)
            startActivity(intent)
        }


    }
}