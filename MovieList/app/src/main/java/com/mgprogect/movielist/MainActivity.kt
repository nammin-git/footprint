package com.mgprogect.movielist

import android.graphics.Movie
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.View
import android.widget.AdapterView
import android.widget.Toast
import androidx.core.content.ContextCompat
import com.mgprogect.movielist.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {
    val binding by lazy { ActivityMainBinding.inflate(layoutInflater) }
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(binding.root)

        val items = mutableListOf<MovieClass>()

        items.add(MovieClass(ContextCompat.getDrawable(this, R.drawable.the_truman_poster)!!, "The Truman Show", "PG 12"))
        items.add(MovieClass(ContextCompat.getDrawable(this, R.drawable.the_silence_poster)!!, "The Silence of Lambs", "R-rated"))
        items.add(MovieClass(ContextCompat.getDrawable(this, R.drawable.lala_land_poster)!!, "La La Land", "PG 13"))

        val myAdapter = Adapter(items)
        binding.listView.adapter = myAdapter

        binding.listView.setOnItemClickListener { parent: AdapterView<*>, view: View, position: Int, id: Long ->
            val item = parent.getItemAtPosition(position) as MovieClass
            Toast.makeText(this, item.movieName, Toast.LENGTH_SHORT).show()
        }
    }
}