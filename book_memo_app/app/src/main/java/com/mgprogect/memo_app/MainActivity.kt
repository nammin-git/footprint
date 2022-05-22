package com.mgprogect.book_memo_app

import android.app.DatePickerDialog
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import android.view.LayoutInflater
import android.widget.Button
import android.widget.DatePicker
import androidx.appcompat.app.AlertDialog
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
                    }

                }, year, month, date)

                dlg.show()

            }
        }

    }
}