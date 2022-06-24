package com.mgprogect.bluelight_filter

import android.content.Context
import android.content.Intent
import android.net.Uri
import android.os.Build
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.provider.Settings
import android.provider.Settings.System.SCREEN_BRIGHTNESS
import android.provider.Settings.System.canWrite
import android.util.Log
import android.widget.SeekBar
import android.widget.TextView
import android.widget.Toast
import androidx.appcompat.widget.AppCompatDrawableManager.get
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

        //If app has no permission to write system settings
        if(!canWrite) {
            seekbar.isEnabled = false
            allowWritePermission()
        }

        //seekbar setting
        seekbar.max = 100
        seekbar.keyProgressIncrement = 1

        //set the progress of the seekbar based on the system's brightness
        seekbar.setOnSeekBarChangeListener(object :
            SeekBar.OnSeekBarChangeListener {
            override fun onProgressChanged(seekBar: SeekBar?, progress: Int, fromUser: Boolean) {
                //Display the current progress
                textPerc.text = "${progress}%"
                Log.d("SeekBar","onProgressChanged 값 변경 중 : progress [${progress}], fromUser [${fromUser}]")

                //Change the screen brightness
                if(canWrite) {
                    setBrightness(progress)
                }
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

// Extension property to get write system settings permission status
val Context.canWrite:Boolean
get() {
    if (Build.VERSION.SDK_INT > Build.VERSION_CODES.M) {
        return Settings.System.canWrite(this)
    }else{
        return true
    }
}

// Extension function to allow write system settings
fun Context.allowWritePermission() {
    if(Build.VERSION.SDK_INT > Build.VERSION_CODES.M) {
        val intent = Intent(
            Settings.ACTION_MANAGE_WRITE_SETTINGS,
            Uri.parse("package:$packageName")
        )
        startActivity(intent)
    }
}

// Extension property to get screen brightness programmatically
val Context.brightness:Int
    get() {
        return Settings.System.getInt(
            this.contentResolver,
            Settings.System.SCREEN_BRIGHTNESS,
            0
        )
    }

// Extension method to set screen brightness programmatically
fun Context.setBrightness(value:Int):Unit{
    Settings.System.putInt(
        this.contentResolver,
        Settings.System.SCREEN_BRIGHTNESS,
        value
    )
}