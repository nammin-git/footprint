package com.mgprogect.backbutton_ex

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.os.Handler
import android.util.Log
import android.widget.Toast
import com.mgprogect.backbutton_ex.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {

    private var isDouble = false

    val binding by lazy { ActivityMainBinding.inflate(layoutInflater) }
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(binding.root)

        }

    override fun onBackPressed() {
        if(isDouble == true) {
            finish()
        }

        isDouble = true
        Toast.makeText(this,"더블 클릭하면 앱을 종료합니다.", Toast.LENGTH_SHORT).show()

        Handler().postDelayed(Runnable {
            isDouble = false
        }, 2000)
    }
}