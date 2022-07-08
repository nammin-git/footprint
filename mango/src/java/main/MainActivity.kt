package com.mgprogect.mango

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import androidx.recyclerview.widget.GridLayoutManager
import androidx.recyclerview.widget.LinearLayoutManager
import androidx.recyclerview.widget.RecyclerView

class MainActivity : AppCompatActivity() {

    //데이터모델이 들어갈 리스트 선언
    private var items = mutableListOf<ContentModel>()

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        //리스트에 데이터 추가
        items.add(
            ContentModel(
                "https://www.mangoplate.com/restaurants/LJYrI90QBA",
                "https://mp-seoul-image-production-s3.mangoplate.com/37208_1620286045944187.jpg?fit=around|512:512&crop=512:512;*,*&output-format=jpg&output-quality=80",
                "그랜드애플"
            )
        )

        items.add(
            ContentModel(
                "https://www.mangoplate.com/restaurants/LJYrI90QBA",
                "https://mp-seoul-image-production-s3.mangoplate.com/37208_1620286045944187.jpg?fit=around|512:512&crop=512:512;*,*&output-format=jpg&output-quality=80",
                "그랜드애플"
            )
        )

        items.add(
            ContentModel(
                "https://www.mangoplate.com/restaurants/LJYrI90QBA",
                "https://mp-seoul-image-production-s3.mangoplate.com/37208_1620286045944187.jpg?fit=around|512:512&crop=512:512;*,*&output-format=jpg&output-quality=80",
                "그랜드애플"
            )
        )

        //리사이클러뷰 연결
        val recyclerview = findViewById<RecyclerView>(R.id.rv)
        val rvAdapter = RVAdapter(baseContext, items)
        recyclerview.adapter = rvAdapter

        //그리드레이아웃 적용
        recyclerview.layoutManager = GridLayoutManager(this, 2)
    }
}