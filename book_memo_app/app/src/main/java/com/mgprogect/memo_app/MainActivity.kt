package com.mgprogect.book_memo_app

import android.app.DatePickerDialog
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import android.view.LayoutInflater
import android.widget.*
import androidx.appcompat.app.AlertDialog
import com.google.firebase.auth.FirebaseAuth
import com.google.firebase.auth.ktx.*
import com.google.firebase.database.DataSnapshot
import com.google.firebase.database.DatabaseError
import com.google.firebase.database.ValueEventListener
import com.google.firebase.database.ktx.database
import com.google.firebase.ktx.Firebase
import java.util.*

class MainActivity : AppCompatActivity() {

    private val dataModelList = mutableListOf<DataModel>()

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        val database = Firebase.database
        val myRef = database.getReference("bookMemo")

        val listView = findViewById<ListView>(R.id.mainLV)
        val adapterMain = ListViewAdapter(dataModelList)
        listView.adapter = adapterMain


        //데이터 불러오기
        myRef.child(Firebase.auth.currentUser!!.uid).addValueEventListener(object : ValueEventListener{
            override fun onDataChange(snapshot: DataSnapshot) {
                dataModelList.clear()

                for(dataModel in snapshot.children) {
                    dataModelList.add(dataModel.getValue(DataModel::class.java)!!)
                }
                //데이터 모델에 값이 들어가고 나면 새롭게 리스트뷰를 만들어줘라 ... 비동기
                adapterMain.notifyDataSetChanged()

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
                        dateSelectBtn.setText("${year}, ${month + 1}, ${dayOfMonth}")

                        //날짜를 선택하면 dateText의 값이 변경됨
                        dateText = "${year}, ${month + 1}, ${dayOfMonth}"
                    }

                }, year, month, date)

                dlg.show()
            }


            //저장하기 버튼을 만들면 리얼타임 데이터베이스에 저장
            val saveBtn = mAlertDialog.findViewById<Button>(R.id.saveBtn)
            saveBtn?.setOnClickListener {

                Log.d("saveBtn", "SaveBtn reaction")

                //editText에 저장된 책 제목과 메모 내용을 데이터베이스에 저장함
                val bookTitle = mAlertDialog.findViewById<EditText>(R.id.bookTitle)?.text.toString()
                val bookMemo = mAlertDialog.findViewById<EditText>(R.id.bookMemo)?.text.toString()

                Log.d("saveBtn", "converting the data")

                val user = Firebase.auth.currentUser
                val database = Firebase.database
                val myRef = database.getReference("bookMemo").child(Firebase.auth.currentUser!!.uid)

                Log.d("saveBtn", user?.uid.toString())

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