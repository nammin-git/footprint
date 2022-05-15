package com.mgprogect.book_memo_app

import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.os.Handler
import android.util.Log
import android.widget.Toast
import com.google.firebase.auth.FirebaseAuth
import com.google.firebase.auth.ktx.auth
import com.google.firebase.ktx.Firebase

class SplashActivity : AppCompatActivity() {

    private lateinit var auth: FirebaseAuth

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_splash)

        auth = Firebase.auth

        try {
            Log.d("Spalsh", auth.currentUser?.uid.toString())
            Log.d("Splash", "이미 로그인 된 회원입니다.")

            Handler().postDelayed({
                startActivity(Intent(this, MainActivity::class.java))
                finish()
            }
                ,3000)
        }
        catch (e : Exception) {
            Log.d("Splash", "로그인이 되어있지 않습니다.\n비회원으로 로그인합니다.")

            //signInAnonymously를 호출하여 익명 사용자로 로그인
            auth.signInAnonymously()
                .addOnCompleteListener(this) { task ->
                    if (task.isSuccessful) {
                        //익명 로그인 성공 시
                        Log.d("Splash", "비회원으로 로그인이 완료되었습니다.")
                        Toast.makeText(baseContext, "Authentication succeed.",
                            Toast.LENGTH_SHORT).show()

                        Handler().postDelayed({
                            startActivity(Intent(this, MainActivity::class.java))
                            finish()
                        }
                            ,3000)

                    } else {
                        // 익명 로그인 실패 시
                        Log.w("Splash", "비회원 로그인을 실패하였습니다.", task.exception)
                        Toast.makeText(baseContext, "Authentication failed.",
                            Toast.LENGTH_SHORT).show()
                    }
                }
        }


    }
}