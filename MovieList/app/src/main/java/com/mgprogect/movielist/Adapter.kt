package com.mgprogect.movielist

import android.view.View
import android.view.ViewGroup
import android.widget.BaseAdapter

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
        return
    }
}