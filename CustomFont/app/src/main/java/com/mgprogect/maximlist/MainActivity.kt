package com.mgprogect.listview_ex

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import com.mgprogect.listview_ex.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {
    val binding by lazy { ActivityMainBinding.inflate(layoutInflater) }
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(binding.root)

        val list_item = mutableListOf<String>()

        list_item.add("A")
        list_item.add("B")
        list_item.add("C")

        val listview = binding.mainListview

        //어댑터로 데이터가 전달달
       val listAdapter = ListViewAdapter(list_item)

        //리스트뷰에 있는 어뎁터에 방금 만든 어댑터를 연결해주겠다
        listview.adapter = listAdapter
    }
}