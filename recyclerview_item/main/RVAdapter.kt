package com.mgprogect.recyclerview_item

import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.TextView
import androidx.recyclerview.widget.RecyclerView
import org.w3c.dom.Text

class RVAdapter(val items: MutableList<String>): RecyclerView.Adapter<RVAdapter.ViewHolder>() {
    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): RVAdapter.ViewHolder {
        //리사이클러뷰에 아이템을 가져와줌
        val view = LayoutInflater.from(parent.context).inflate(R.layout.rv_item, parent, false)
        return ViewHolder(view)
    }

    interface ItemClick {
        fun onClick(view: View, position: Int)
    }

    var itemClick: ItemClick? = null

    override fun onBindViewHolder(holder: RVAdapter.ViewHolder, position: Int) {
        //뷰홀더에 바인딩해줌
        holder.bindItems(items[position])
    }

    override fun getItemCount(): Int {
        //전체 리사이클러뷰의 갯수를 알려줌
        return items.size
    }

    inner class ViewHolder(itemView: View): RecyclerView.ViewHolder(itemView) {
        fun bindItems(item: String) {
            //데이터를 맵핑해주는 곳
            val rv_text = itemView.findViewById<TextView>(R.id.rvItem)
            rv_text.text = item
        }
    }
}