package com.mgprogect.movielist

import android.graphics.Movie
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import com.mgprogect.movielist.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {
    val binding by lazy { ActivityMainBinding.inflate(layoutInflater) }
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(binding.root)


        val listview = binding.listView
        val myAdapter = Adapter()
    }
}