package com.example.first_project_mobile

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle

    val languageName = "Kotlin"
    var count: Int = 10

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
    }
}