package com.mgprogect.bts_gallary

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import com.mgprogect.bts_gallary.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {
    lateinit var binding: ActivityMainBinding

    override fun onCreate(savedInstanceState: Bundle?) {
        binding = ActivityMainBinding.inflate(layoutInflater)
        super.onCreate(savedInstanceState)
        setContentView(binding.root)

        // 1. 프로그램이 화면이 클릭되었다는 것을 알아야함
        val image1 = binding.btsImage1

        // 2. 화면이 클릭되면, 다음 화면으로 넘어가서 사진을 크게 보여줌

    }
}