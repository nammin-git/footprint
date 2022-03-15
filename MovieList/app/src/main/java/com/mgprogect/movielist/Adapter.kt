package com.mgprogect.movielist

import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.BaseAdapter
import android.widget.ImageView
import android.widget.TextView
import androidx.annotation.ContentView

class Adapter(val List: MutableList<String>): BaseAdapter() {
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
            convertView = LayoutInflater.from(parent?.context).inflate(R.layout.listview, parent, false)
        }

        val listviewImage = convertView?.findViewById<ImageView>(R.id.poster)
        val listviewMovieName = convertView?.findViewById<TextView>(R.id.movieName)
        val listviewGrade = convertView?.findViewById<TextView>(R.id.grade)

        listviewImage!!.setImageResource(position)
        listviewMovieName!!.text = List[position]
        listviewGrade!!.text = List[position]

        return convertView!!

    }
}