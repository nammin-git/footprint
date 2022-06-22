package com.mgprogect.bluelight_filter

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.provider.Settings.System.SCREEN_BRIGHTNESS
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
                TODO("Not yet implemented")
            }

            override fun onStartTrackingTouch(seekBar: SeekBar?) {
                TODO("Not yet implemented")
            }

            override fun onStopTrackingTouch(seekBar: SeekBar?) {
                Toast.makeText(this@MainActivity, "Progress is : "+seekbar.progress+"&", Toast.LENGTH_LONG).show()
            }
            }
        )

    }
}