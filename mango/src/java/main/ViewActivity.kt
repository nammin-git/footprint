package com.mgprogect.mango

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.webkit.WebView
import com.google.firebase.auth.FirebaseAuth
import com.google.firebase.auth.ktx.auth
import com.google.firebase.database.ktx.database
import com.google.firebase.ktx.Firebase

class ViewActivity : AppCompatActivity() {

    private lateinit var auth: FirebaseAuth

    override fun onCreate(savedInstanceState: Bundle?) {

        auth = Firebase.auth

        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_view)

        val webView = findViewById<WebView>(R.id.wb)
        webView.loadUrl(intent.getStringExtra("url").toString())


        // Write a message to the database
        val database = Firebase.database
        val myBookmarkRef = database.getReference("bookmark_ref")

        val url = intent.getStringExtra("url").toString()
        val titleText = intent.getStringExtra("titleText").toString()
        val imageUrl = intent.getStringExtra("imageUrl").toString()

        myBookmarkRef
            .child(auth.currentUser!!.uid)
            .setValue(ContentModel(url, imageUrl, titleText))

    }
}