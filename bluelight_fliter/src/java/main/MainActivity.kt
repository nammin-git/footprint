package com.mgprogect.bluelight_filter

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.provider.Settings.System.SCREEN_BRIGHTNESS
import com.google.android.material.slider.Slider

class MainActivity : AppCompatActivity() {


    override fun onCreate(savedInstanceState: Bundle?) {

        private var brightness = null

        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        val slider = findViewById<Slider>(R.id.slider)
        slider.addOnSliderTouchListener(object : Slider.OnSliderTouchListener {
            override fun onStartTrackingTouch(slider: Slider) {
                brightness = System.getInt(contentResolver, System.SCREEN_BRIGHTNESS)
            }

            override fun onStopTrackingTouch(slider: Slider) {
                // Responds to when slider's touch event is being stopped
            }
        })

        slider.addOnChangeListener { slider, value, fromUser ->
            // Responds to when slider's value is changed
        }


    }
}