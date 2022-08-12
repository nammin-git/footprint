package com.mgprogect.mango

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import com.google.firebase.auth.FirebaseAuth
import com.google.firebase.auth.ktx.auth
import com.google.firebase.database.DataSnapshot
import com.google.firebase.database.DatabaseError
import com.google.firebase.database.ValueEventListener
import com.google.firebase.database.ktx.database
import com.google.firebase.ktx.Firebase

class BookmarkActivity : AppCompatActivity() {

    private lateinit var auth: FirebaseAuth

    override fun onCreate(savedInstanceState: Bundle?) {

        auth = Firebase.auth

        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_bookmark)

        // Write a message to the database
        val database = Firebase.database
        val myBookmarkRef = database.getReference("bookmark_ref")

        myBookmarkRef
            .child(auth.currentUser!!.uid)
            .addValueEventListener(object : ValueEventListener {
                override fun onDataChange(snapshot: DataSnapshot) {
                    for (dataModel in snapshot.children) {
                        Log.d("Datamodel", dataModel.toString())
                    }
                }

                override fun onCancelled(error: DatabaseError) {
                    Log.e("Bookmark", "dbError")
                }

            })

    }
}