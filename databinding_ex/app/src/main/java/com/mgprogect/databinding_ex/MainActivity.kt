package com.mgprogect.databinding_ex

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import androidx.databinding.DataBindingUtil
import com.mgprogect.databinding_ex.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {

    private lateinit var binding : ActivityMainBinding

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        binding = DataBindingUtil.setContentView(this, R.layout.activity_main)

        val test = "This is a test value."
        Log.d("MainActivity", test) //디버그 debug
        Log.e("MainActivity", test) //오류 error
        Log.w("MainActivity", test) //경고 warning
        Log.i("MainActivity", test) //정보 information
        Log.v("MainActivity", test) //상세 verbose(상세한, 장황한, 말 많은)

    }
}