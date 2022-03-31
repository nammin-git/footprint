package com.mgprogect.recyclerview_item

import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.recyclerview.widget.RecyclerView

class RVAdapter(val items: MutableList<String>): RecyclerView.Adapter<RVAdapter.ViewHolder>() {
    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): RVAdapter.ViewHolder {
        //리사이클러뷰에 아이템을 가져와줌
        val view = LayoutInflater.from(parent.context).inflate(R.layout.rv_item, parent, false)
        return ViewHolder(view)
    }

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

        }
    }
}