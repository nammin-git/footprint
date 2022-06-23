package com.mgprogect.bluelight_filter

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.provider.Settings.System.SCREEN_BRIGHTNESS
import android.util.Log
import android.widget.SeekBar
import android.widget.TextView
import android.widget.Toast
import com.google.android.material.slider.Slider

class MainActivity : AppCompatActivity() {

    private var brightness = 0

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        //content resolver used as a handle to the system's settings
        //and window object will store a reference to the current window
        val cResolver = contentResolver
        val cWindow = getWindow()

        //instantiate seekbar object
        val seekbar = findViewById<SeekBar>(R.id.seekBar)
        val textPerc = findViewById<TextView>(R.id.textPercentage)

        //seekbar setting
        seekbar.max = 255
        seekbar.keyProgressIncrement = 1

        //set the progress of the seekbar based on the system's brightness
        seekbar.setOnSeekBarChangeListener(object :
            SeekBar.OnSeekBarChangeListener {
            override fun onProgressChanged(seekBar: SeekBar?, progress: Int, fromUser: Boolean) {
                Log.d("SeekBar","onProgressChanged 값 변경 중 : progress [${progress}], fromUser [${fromUser}]")
            }

            override fun onStartTrackingTouch(seekBar: SeekBar?) {
                Log.d("SeekBar","onStartTrackingTouch 값 변경 시작 : progress [${seekBar?.progress}]")
            }

            override fun onStopTrackingTouch(seekBar: SeekBar?) {
                Log.d("SeekBar","onStopTrackingTouch 값 변경 종료 : progress [${seekBar?.progress}]")
            }
            }
        )

    }
}