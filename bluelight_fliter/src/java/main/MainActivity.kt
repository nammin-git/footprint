package com.mgprogect.bluelight_filter

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import com.google.android.material.slider.Slider

class MainActivity : AppCompatActivity() {


    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        val slider = findViewById<Slider>(R.id.slider)
        slider.addOnSliderTouchListener(object : Slider.OnSliderTouchListener {
            override fun onStartTrackingTouch(slider: Slider) {
                // Responds to when slider's touch event is being started
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