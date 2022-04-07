package com.mgprogect.trot_list

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import com.mgprogect.trot_list.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {
    val binding by lazy { ActivityMainBinding.inflate(layoutInflater) }
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(binding.root)

        //1. navigation 만들기

        //2. fragment 만들기
            //2-1. fragment 를 navigation 에 연결
            //2-2. fragment 에서 버튼 누르면 이동하기

        //3. recyclerView 만들기
    }
}