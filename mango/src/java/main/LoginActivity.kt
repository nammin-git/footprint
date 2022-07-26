package com.mgprogect.mango

import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.os.Handler
import com.google.firebase.auth.FirebaseAuth
import com.google.firebase.auth.ktx.auth
import com.google.firebase.ktx.Firebase

class SplashActivity : AppCompatActivity() {

    private lateinit var auth: FirebaseAuth

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_splash)

        auth = Firebase.auth

        //회원가입이 되어있는지 확인
        if(auth.currentUser.uid == null) {
            //회원가입x -> JoinActivity로 이동
            Handler().postDelayed({
                startActivity(Intent(this, SignupActivity::class.java))
                finish()
            }, 3000)
        } else {
            //회원가입o -> MainActivity로 이동
        }

        Handler().postDelayed({
            startActivity(Intent(this, MainActivity::class.java))
            finish()
        }, 3000)
    }
}
