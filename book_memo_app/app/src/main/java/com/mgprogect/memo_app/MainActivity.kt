package com.mgprogect.book_memo_app

import android.app.DatePickerDialog
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import android.view.LayoutInflater
import android.widget.Button
import android.widget.DatePicker
import android.widget.EditText
import androidx.appcompat.app.AlertDialog
import com.google.firebase.database.ktx.database
import com.google.firebase.ktx.Firebase
import java.util.*

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        val addButton = findViewById<Button>(R.id.add_button)
        addButton.setOnClickListener {

            //android custom dialog 만들기
            val mDialogView = LayoutInflater.from(this).inflate(R.layout.memo_dialog,null)
            val mBuilder = AlertDialog.Builder(this, R.style.alertDialogTheme)
                .setView(mDialogView)

            val mAlertDialog = mBuilder.show()

            val dateSelectBtn = mAlertDialog.findViewById<Button>(R.id.dateSelectBtn)

            var dateText = ""

            //날짜를 선택해주세요 버튼을 누르면 달력 api 뜨게 하기기
            mAlertDialog.findViewById<Button>(R.id.dateSelectBtn)?.setOnClickListener {

                val today = GregorianCalendar()
                val year : Int = today.get(Calendar.YEAR)
                val month : Int = today.get(Calendar.MONTH)
                val date : Int = today.get(Calendar.DATE)

                val dlg = DatePickerDialog(this, object : DatePickerDialog.OnDateSetListener {
                    override fun onDateSet(view: DatePicker?, year: Int, month: Int, dayOfMonth: Int
                    ) {
                        Log.d("main", "${year}, ${month + 1}, ${dayOfMonth}")
                        dateSelectBtn?.setText("${year}, ${month + 1}, ${dayOfMonth}")

                        //날짜를 선택하면 dateText의 값이 변경됨
                        dateText = "${year}, ${month + 1}, ${dayOfMonth}"
                    }

                }, year, month, date)

                dlg.show()
            }


            //저장하기 버튼을 만들면 리얼타임 데이터베이스에 저장
            val saveBtn = findViewById<Button>(R.id.saveBtn)
            saveBtn.setOnClickListener {

                //editText에 저장된 책 제목과 메모 내용을 데이터베이스에 저장함
                val bookTitle = mAlertDialog.findViewById<EditText>(R.id.bookTitle)?.text.toString()
                val bookMemo = mAlertDialog.findViewById<EditText>(R.id.bookMemo)?.text.toString()

                val database = Firebase.database
                val myRef = database.getReference("bookMemo")

                //setValue 속에 데이터가 저장됨
                //데이터가 없으면 넣고 있으면 수정되는 버전
                //myRef.setValue("Hello, World!")

                //데이터를 계속해서 추가하는 버전
                //myRef.push().setValue("")

                val model = DataModel(dateText, bookTitle, bookMemo)

                myRef
                    .push()
                    .setValue(model)
            }

        }

    }
}