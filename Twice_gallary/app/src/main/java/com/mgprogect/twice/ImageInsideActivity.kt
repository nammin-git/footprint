package com.mgprogect.twice

import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.Toast
import com.mgprogect.twice.databinding.ActivityImageInsideBinding
import com.mgprogect.twice.databinding.ActivityMainBinding

class ImageInsideActivity : AppCompatActivity() {
    val binding by lazy{ ActivityImageInsideBinding.inflate(layoutInflater) }
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(binding.root)

        val getData = intent.getStringExtra("data")

        val memberImage = binding.memberImageArea

        Toast.makeText(this, getData, Toast.LENGTH_SHORT).show()

        when(getData) {
            "1" -> memberImage.setImageResource(R.drawable.member_1)
            "2" -> memberImage.setImageResource(R.drawable.member_2)
            "3" -> memberImage.setImageResource(R.drawable.member_3)
            "4" -> memberImage.setImageResource(R.drawable.member_4)
            "5" -> memberImage.setImageResource(R.drawable.member_5)
            "6" -> memberImage.setImageResource(R.drawable.member_6)
            "7" -> memberImage.setImageResource(R.drawable.member_7)
            "8" -> memberImage.setImageResource(R.drawable.member_8)
            "9" -> memberImage.setImageResource(R.drawable.member_9)
        }

    }
}