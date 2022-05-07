package com.mgprogect.diet_memo

import android.app.DatePickerDialog
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import android.view.LayoutInflater
import android.widget.*
import androidx.appcompat.app.AlertDialog
import com.google.firebase.auth.FirebaseAuth
import com.google.firebase.auth.ktx.auth
import com.google.firebase.database.DataSnapshot
import com.google.firebase.database.DatabaseError
import com.google.firebase.database.ValueEventListener
import com.google.firebase.database.ktx.database
import com.google.firebase.ktx.Firebase
import java.util.*

class MainActivity : AppCompatActivity() {

    val dataModelList = mutableListOf<DataModel>()

    override fun onCreate(savedInstanceState: Bundle?) {

        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        val database = Firebase.database
        val myRef = database.getReference("my memo")

        //데이터를 리스트뷰에 연결
        val listView = findViewById<ListView>(R.id.mainLV)

        //리스트뷰와 메인 액티비티를 연결해줄 어댑터
        val adapterList = listViewAdapter(dataModelList)

        listView.adapter = adapterList

       myRef.addValueEventListener(object : ValueEventListener {
            override fun onDataChange(snapshot: DataSnapshot) {
                //snapshot 에 모든 데이터를 다 가져옴
                for(dataModel in snapshot.children) {
                    Log.d("Data", dataModel.toString())
                    dataModelList.add(dataModel.getValue(DataModel::class.java)!!)
                }
                Log.d("DataModel", dataModelList.toString())
            }

            override fun onCancelled(error: DatabaseError) {
                TODO("Not yet implemented")
            }

        })
        
        val writeBtn = findViewById<ImageView>(R.id.writeBtn)
        writeBtn.setOnClickListener {
            //dialog를 띄우는 코드(22~27)
            val mDialogView = LayoutInflater.from(this).inflate(R.layout.custom_dialog, null)
            val mBuilder = AlertDialog.Builder(this)
                .setView(mDialogView)
                .setTitle("운동 메모 다이얼로그")

            val mAlertDialog = mBuilder.show()

            val dateSelectBtn = mAlertDialog.findViewById<Button>(R.id.dateSelectBtn)

            var dateText = ""

            //날짜를 선택할 수 있는 다이얼로그 만들기
            dateSelectBtn?.setOnClickListener {

                val today = GregorianCalendar()
                var year : Int = today.get(Calendar.YEAR)
                var month : Int = today.get(Calendar.MONTH)
                var date : Int = today.get(Calendar.DATE)

                val dlg = DatePickerDialog(this, object : DatePickerDialog.OnDateSetListener{
                    override fun onDateSet(view: DatePicker?, year: Int, month: Int, dayOfMonth: Int) {
                        Log.d("Main", "${year}, ${month+1}, ${dayOfMonth}")
                        dateSelectBtn.setText("${year}, ${month+1}, ${dayOfMonth}")

                        dateText = "${year}, ${month+1}, ${dayOfMonth}"
                    }
                }, year, month, date)
                dlg.show()

            }

            //저장 버튼 만들기
            val saveBtn = mAlertDialog.findViewById<Button>(R.id.saveBtn)
            saveBtn?.setOnClickListener {

                val healthMemo = mAlertDialog.findViewById<EditText>(R.id.healthMemo)?.text.toString()

                //reference 주소 부분
                val database = Firebase.database
                val myRef = database.getReference("my memo")

                val model = DataModel(dateText, healthMemo)

                //데이터 한 번만 넣으려면
                //myRef.setValue("Hello, World!")
                //계속 데이터를 넣으려면
                myRef.push().setValue(model)

                mAlertDialog.dismiss()

            }

        }

    }
}