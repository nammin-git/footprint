package com.mgprogect.book_memo_app

import android.app.DatePickerDialog
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import android.view.LayoutInflater
import android.widget.*
import androidx.appcompat.app.AlertDialog
import androidx.core.view.OneShotPreDrawListener.add
import com.google.firebase.database.DataSnapshot
import com.google.firebase.database.DatabaseError
import com.google.firebase.database.ValueEventListener
import com.google.firebase.database.ktx.database
import com.google.firebase.ktx.Firebase
import java.util.*

class MainActivity : AppCompatActivity() {

    private val dataModelList = MutableList<DataModel>()

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        val database = Firebase.database
        val myRef = database.getReference("bookMemo")

        val listView = findViewById<ListView>(R.id.mainLV)
        val adapter = ListViewAdapter(dataModelList)


        //데이터 불러오기
        myRef.addValueEventListener(object : ValueEventListener{
            override fun onDataChange(snapshot: DataSnapshot) {

                for(dataModel in snapshot.children) {
                    Log.d("Data", dataModel.toString())
                    dataModelList.add(dataModel.getValue(DataModel::class.java)!!)
                }

            }

            override fun onCancelled(error: DatabaseError) {
                TODO("Not yet implemented")
            }
        })


        val addButton = findViewById<Button>(R.id.add_button)
        addButton.setOnClickListener {

            //android custom dialog 만들기
            val mDialogView = LayoutInflater.from(this).inflate(R.layout.memo_dialog,null)
            val mBuilder = AlertDialog.Builder(this, R.style.alertDialogTheme)
                .setView(mDialogView)
                .setTitle("Book Memo")

            val mAlertDialog = mBuilder.show()

            val dateSelectBtn = mAlertDialog.findViewById<Button>(R.id.dateSelectBtn)

            var dateText = ""

            //날짜를 선택해주세요 버튼을 누르면 달력 api 뜨게 하기기
            dateSelectBtn!!.setOnClickListener {

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
            val saveBtn = mAlertDialog.findViewById<Button>(R.id.saveBtn)
            saveBtn?.setOnClickListener {

                Toast.makeText(this,"saveBtn reaction", Toast.LENGTH_LONG)

                //editText에 저장된 책 제목과 메모 내용을 데이터베이스에 저장함
                val bookTitle = mAlertDialog.findViewById<EditText>(R.id.bookTitle)?.text.toString()
                val bookMemo = mAlertDialog.findViewById<EditText>(R.id.bookMemo)?.text.toString()

                //setValue 속에 데이터가 저장됨
                //데이터가 없으면 넣고 있으면 수정되는 버전
                //myRef.setValue("Hello, World!")

                //데이터를 계속해서 추가하는 버전
                //myRef.push().setValue("")

                val model = DataModel(dateText, bookTitle, bookMemo)

                myRef
                    .push()
                    .setValue(model)

                //저장하기 버튼 누르면 dialog 사라지게 하기
                mAlertDialog.dismiss()

            }
        }


    }
}