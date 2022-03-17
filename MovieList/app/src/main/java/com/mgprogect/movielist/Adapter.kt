package com.mgprogect.movielist

import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.BaseAdapter
import android.widget.ImageView
import android.widget.TextView
import androidx.annotation.ContentView

class Adapter(private val items: MutableList<MovieClass>): BaseAdapter() {
    override fun getCount(): Int {
        return items.size
    }

    override fun getItem(position: Int): Any {
        return items[position]
    }

    override fun getItemId(position: Int): Long {
        return position.toLong()
    }

    override fun getView(position: Int, convertView: View?, parent: ViewGroup?): View {
        var convertView = convertView

        if(convertView == null) {
            convertView = LayoutInflater.from(parent?.context).inflate(R.layout.listview, parent, false)
        }

        val item: MovieClass = items[position]

        convertView.poster
        val listviewImage = convertView?.findViewById<ImageView>(R.id.poster)
        val listviewMovieName = convertView?.findViewById<TextView>(R.id.movieName)
        val listviewGrade = convertView?.findViewById<TextView>(R.id.grade)

        listviewImage!!.setImageResource(position)
        listviewMovieName!!.text = List[position]
        listviewGrade!!.text = List[position]

        return convertView!!

    }
}