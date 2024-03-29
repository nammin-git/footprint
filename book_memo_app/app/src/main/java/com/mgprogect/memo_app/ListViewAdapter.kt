package com.mgprogect.book_memo_app

import android.text.Layout
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.BaseAdapter
import android.widget.TextView

class ListViewAdapter(val List : MutableList<DataModel>) : BaseAdapter() {
    override fun getCount(): Int {
        return List.size
    }

    override fun getItem(position: Int): Any {
        return List[position]
    }

    override fun getItemId(position: Int): Long {
        return position.toLong()
    }

    override fun getView(position: Int, convertView: View?, parent: ViewGroup?): View {

        var convertView = convertView
        if(convertView == null) {

            convertView = LayoutInflater.from(parent?.context).inflate(R.layout.listview_item, parent, false)

        }

        val date = convertView?.findViewById<TextView>(R.id.listviewDateArea)
        val title = convertView?.findViewById<TextView>(R.id.listviewTitleArea)

        date!!.text = List[position].date
        title!!.text = List[position].title

        return convertView!!
    }
}