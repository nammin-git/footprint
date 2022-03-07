package com.mgprogect.goodword

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import com.mgprogect.goodword.databinding.ActivitySentenceBinding

class SentenceActivity : AppCompatActivity() {
    val binding by lazy { ActivitySentenceBinding.inflate(layoutInflater) }
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(binding.root)


    }
}