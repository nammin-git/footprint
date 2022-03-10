package com.mgprogect.goodword

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import com.mgprogect.goodword.databinding.ActivitySentenceBinding

class SentenceActivity : AppCompatActivity() {
    val binding by lazy { ActivitySentenceBinding.inflate(layoutInflater) }
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(binding.root)

        val sentenceList = mutableListOf<String>()

        sentenceList.add("일하는 시간과 노는 시간을 뚜렷이 구분하라. \n시간의 중요성을 이해하고 매순간을 즐겁게 보내고 유용하게 활용하라. \n그러면 젋은 날은 유쾌함으로 가득찰것이고 늙어서도 후회할 일이 적어질것이며 비록 가난할 때라도 인생을 아름답게 살아갈 수 있다 \n\n" +
                "by 루이사 메이올콧")
        sentenceList.add("절대 어제를 후회하지 마라. \n인생은 오늘의 나 안에 있고 내일은 스스로 만드는 것이다. \n\n" +
                "by L.론허바드")
        sentenceList.add("한번의 실패와 영원한 실패를 혼동하지 마라  \n\n" +
                "by F.스콧 피츠제럴드")
        sentenceList.add("화려한 일을 추구하지 말라. \n중요한 것은 스스로의 재능이며, \n자신의 행동에 쏟아 붓는 사랑의 정도이다. \n\n" +
                "by 머더 테레사")
        sentenceList.add("꿈을 계속 간직하고 있으면 반드시 실현할 때가 온다. \n\n" +
                "by 괴테")
        sentenceList.add("사막이 아름다운 것은 어딘가에 샘이 숨겨져 있기 때문이다 \n\n" +
                "by 생텍쥐베리")
        sentenceList.add("삶을 사는 데는 단 두가지 방법이 있다. \n하나는 기적이 전혀 없다고 여기는 것이고 \n또 다른 하나는 모든 것이 기적이라고 여기는 방식이다. \n\n" +
                "by 알버트 아인슈타인")


        val listview = binding.sentenceListView
        val sentenceAdapter = ListViewAdapter(sentenceList)

        listview.adapter = sentenceAdapter

    }
}