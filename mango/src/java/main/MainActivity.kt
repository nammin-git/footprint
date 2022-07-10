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
                "https://www.mangoplate.com/restaurants/TXkjVTA_MXiL",
                "https://mp-seoul-image-production-s3.mangoplate.com/978259_1609066259920123.jpg?fit=around|512:512&crop=512:512;*,*&output-format=jpg&output-quality=80",
                "톤쇼우"
            )
        )

        items.add(
            ContentModel(
                "https://www.mangoplate.com/restaurants/yNGGQSGw7x",
                "https://mp-seoul-image-production-s3.mangoplate.com/added_restaurants/394407_1453616947181.jpg?fit=around|512:512&crop=512:512;*,*&output-format=jpg&output-quality=80",
                "할매국밥"
            )
        )

        items.add(
            ContentModel(
                "https://www.mangoplate.com/restaurants/yNGGQSGw7x",
                "https://mp-seoul-image-production-s3.mangoplate.com/added_restaurants/394407_1453616947181.jpg?fit=around|512:512&crop=512:512;*,*&output-format=jpg&output-quality=80",
                "할매국밥"
            )
        )

        items.add(
            ContentModel(
                "https://www.mangoplate.com/restaurants/eLq_Q72bscee",
                "https://mp-seoul-image-production-s3.mangoplate.com/1129699_1620482534399327.jpg?fit=around|512:512&crop=512:512;*,*&output-format=jpg&output-quality=80",
                "해목"
            )
        )

        items.add(
            ContentModel(
                "https://www.mangoplate.com/restaurants/s3HTCj99t-",
                "https://mp-seoul-image-production-s3.mangoplate.com/577068_1506913302368580.jpg?fit=around|512:512&crop=512:512;*,*&output-format=jpg&output-quality=80",
                "신발원"
            )
        )

        items.add(
            ContentModel(
                "https://www.mangoplate.com/restaurants/2eD8cCEFZL5n",
                "https://mp-seoul-image-production-s3.mangoplate.com/1037067_1614225069122048.jpg?fit=around|512:512&crop=512:512;*,*&output-format=jpg&output-quality=80",
                "포르타나"
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