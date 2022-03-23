package com.mgprogect.listview_second_ex

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.ListView
import android.widget.Toast
import com.mgprogect.listview_second_ex.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {
    val binding by lazy { ActivityMainBinding.inflate(layoutInflater) }
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(binding.root)

        val list_item = mutableListOf<String>()
        list_item.add("A")
        list_item.add("B")
        list_item.add("C")

        val listview = findViewById<ListView>(R.id.mainListView)

        val listViewAdapter = ListViewAdapter(list_item)
        listview.adapter = listViewAdapter

        listview.setOnItemClickListener { parent, view, position, id ->
            Toast.makeText(this, list_item[position], Toast.LENGTH_SHORT).show()
        }
    }
}