package com.mgprogect.listview_sns

import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.BaseAdapter

class ListViewAdapter(val items: MutableList<ListViewItem>): BaseAdapter() {
    override fun getCount(): Int {
        items.size
    }

    override fun getItem(position: Int): Any {
        items[position]
    }

    override fun getItemId(position: Int): Long {
        position.toLong()
    }

    override fun getView(position: Int, convertView: View?, parent: ViewGroup?): View {
        var convertView = convertView
        if(convertView == null) {
            convertView = LayoutInflater.from(parent?.context).inflate(R.layout.item_list, parent, false)
            }
    }
}