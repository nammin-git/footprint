package com.mgprogect.recyclerview_item

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import com.mgprogect.recyclerview_item.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {
    val binding by lazy { ActivityMainBinding.inflate(layoutInflater) }
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(binding.root)


    }
}