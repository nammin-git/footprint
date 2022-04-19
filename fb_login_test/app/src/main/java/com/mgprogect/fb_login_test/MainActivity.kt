package com.mgprogect.fb_login_test

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import com.mgprogect.fb_login_test.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {
    val binding by lazy { ActivityMainBinding.inflate(layoutInflater) }
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(binding.root)

        val btn = binding.noEmailLoginBtn
        btn.setOnClickListener {

        }

    }
}