package com.mgprogect.listview_ex

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import com.mgprogect.listview_ex.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {
    val binding by lazy { ActivityMainBinding.inflate(layoutInflater) }
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(binding.root)

        //데이터 만들기
        val listFruit = mutableListOf<ListViewModel>()

        listFruit.add(ListViewModel("a", "b"))
        listFruit.add(ListViewModel("c", "d"))
        listFruit.add(ListViewModel("e", "f"))

        //메인엑티비티 >> 어댐터 ... 데이터 넘겨주기
        val adapter = ListViewAdapter(listFruit)

        //메인 엑티비티 xml 파일에 있는 리스트뷰를 변수에 넣기
        val listview = binding.mainListView
        listview.adapter = adapter  //activity_main.xml에 있는 어댑터에 MainActivity와 ListViewAdapter에 있는 어댑터를 서로 같은 거라고 인식시켜줌


    }
}