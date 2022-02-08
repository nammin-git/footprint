package com.mgprogect.reviewgallary

import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.Toast
import com.mgprogect.reviewgallary.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {
    val binding by lazy { ActivityMainBinding.inflate(layoutInflater) }

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(binding.root)

        val photo1 = binding.btsPhoto1
        photo1.setOnClickListener {
            Toast.makeText(this, "Click", Toast.LENGTH_SHORT).show()

            val intent = Intent(this, Bts1Activity::class.java)
            startActivity(intent)
        }










    }

}