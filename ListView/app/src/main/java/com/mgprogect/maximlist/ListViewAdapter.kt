package com.mgprogect.listview_ex

import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.BaseAdapter
import android.widget.TextView

class ListViewAdapter(val List : MutableList<ListViewModel> /*문자열 데이터를 받겠습니다)*/) : BaseAdapter()/*베이스 어댑터의 자식입니다*/ {
    /*
    * 원하는 것: 리스트에 각각의 데이터를 보내고 싶다
    * 메인 액티비티에서 어댑터로 [a, b, c] 라는 데이터를 보냅니다
    * 어댑터는 리스트에 하나하나씩 값을 넣어주는 역할을 한다
    * 그래서 [a, b, c]는 리스트에 차례차례 전달된다
    * 리스트1에 a, 리스트2에 b, 리스트3에 c가 들어감
    */
    override fun getCount(): Int {
        //리스트뷰의 갯수 = 리스트가 몇 줄 뜰건지
        return List.size    //리스트 크기 만큼만 줄 뜨게 하겠다
    }

    override fun getItem(position: Int): Any {
        //리스트의 아이템을 가져다 줌
        //딱히 신경 안 써도 됨
        return List[position]
    }

    override fun getItemId(position: Int): Long {
        //딱히 신경 안 써도 됨
        return position.toLong()
    }

    override fun getView(position: Int, convertView: View?, parent: ViewGroup?): View {
        //데이터를 받아와서 몇 번째줄 리스트에 넣을지 정함
        //리스트뷰 파일을 만들어줘야지 리스트에 넣겠죠? -> xml파일 만듦

        //convertView: View? 를 이용해서 데이터와 리스트를 연결해줌
        var convertView_join = convertView

        //listView_file 에 있는 형식를 가져오는 부분
        if(convertView_join == null) {
            convertView_join = LayoutInflater.from(parent?.context).inflate(R.layout.listview_file, parent, false)
        }

        val title = convertView!!.findViewById<TextView>(R.id.listview_Box1)
        val content = convertView!!.findViewById<TextView>(R.id.listview_Box2)

        title.text = List[position].title
        content.text = List[position].content

        //라인을 하나 가져온 다음에 컨버트뷰를 되돌려줌
        return convertView_join!!

    }

}